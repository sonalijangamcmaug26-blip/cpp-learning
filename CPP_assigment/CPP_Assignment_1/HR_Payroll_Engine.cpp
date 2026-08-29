
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Employee
{
private:
    int empId;
    string name;
    string department;
    char grade;
    double basicSalary;
    bool isActive;

    static int employeeCount;
    static int nextId;

public:

    // Constructor
    Employee()
    {
        empId = nextId++;
        name = "";
        department = "";
        grade = 'D';
        basicSalary = 0;
        isActive = true;

        employeeCount++;
    }

    // Setter for name
    void setName(const string& n)
    {
        if (n.empty())
        {
            cout << "ERROR: Name cannot be empty." << endl;
        }
        else
        {
            name = n;
        }
    }

    // Setter for department
    void setDepartment(const string& dept)
    {
        if (dept == "Engineering" ||
            dept == "HR" ||
            dept == "Finance" ||
            dept == "Operations")
        {
            department = dept;
        }
        else
        {
            cout << "ERROR: '" << dept
                 << "' is not a registered department." << endl;
        }
    }

    // Setter for grade
    void setGrade(char g)
    {
        if (g == 'A' || g == 'B' || g == 'C' || g == 'D')
        {
            grade = g;
        }
        else
        {
            cout << "ERROR: Invalid grade '" << g
                 << "'. Accepted values: A, B, C, D." << endl;
        }
    }

    // Setter for salary
    void setBasicSalary(double salary)
    {
        if (salary > 10000 && salary < 500000)
        {
            basicSalary = salary;
        }
        else
        {
            cout << "ERROR: Salary must be between Rs.10,000 "
                 << "and Rs.5,00,000. Value rejected." << endl;
        }
    }

    // Deactivate employee
    void deactivate()
    {
        isActive = false;
    }

    // Getters
    int getEmpId() const
    {
        return empId;
    }

    string getName() const
    {
        return name;
    }

    string getDepartment() const
    {
        return department;
    }

    char getGrade() const
    {
        return grade;
    }

    double getBasicSalary() const
    {
        return basicSalary;
    }

    bool getIsActive() const
    {
        return isActive;
    }

    // Calculate allowances
    double computeAllowances() const
    {
        switch (grade)
        {
            case 'A':
                return basicSalary * 0.40;

            case 'B':
                return basicSalary * 0.30;

            case 'C':
                return basicSalary * 0.20;

            case 'D':
                return basicSalary * 0.10;

            default:
                return 0;
        }
    }

    // Calculate gross salary
    double computeGrossSalary() const
    {
        return basicSalary + computeAllowances();
    }

    // Calculate tax
    double computeTax() const
    {
        double gross = computeGrossSalary();

        if (gross <= 50000)
        {
            return 0;
        }
        else if (gross <= 100000)
        {
            return (gross - 50000) * 0.10;
        }
        else
        {
            return 5000 + (gross - 100000) * 0.20;
        }
    }

    // Calculate net salary
    double computeNetSalary() const
    {
        return computeGrossSalary() - computeTax();
    }

    // Accept employee details
    void acceptDetails()
    {
        string tempName;
        string tempDepartment;
        char tempGrade;
        double tempSalary;

        cout << "Enter name: ";
        getline(cin >> ws, tempName);
        setName(tempName);

        cout << "Enter department: ";
        getline(cin >> ws, tempDepartment);
        setDepartment(tempDepartment);

        cout << "Enter grade: ";
        cin >> tempGrade;
        setGrade(tempGrade);

        cout << "Enter basic salary: ";
        cin >> tempSalary;
        setBasicSalary(tempSalary);
    }

    // Print payslip
    void printPayslip() const
    {
        cout << fixed << setprecision(2);

        cout << "\n============================================" << endl;
        cout << " EMPLOYEE PAYSLIP — AUG 2026" << endl;
        cout << "============================================" << endl;

        cout << "Emp ID : " << empId << endl;
        cout << "Name : " << name << endl;
        cout << "Department : " << department << endl;
        cout << "Grade : " << grade << endl;
        cout << "Status : " << (isActive ? "Active" : "Inactive") << endl;

        cout << "--------------------------------------------" << endl;

        cout << "Basic Salary : Rs. "
             << basicSalary << endl;

        cout << "Allowances (";

        switch (grade)
        {
            case 'A':
                cout << "40%";
                break;
            case 'B':
                cout << "30%";
                break;
            case 'C':
                cout << "20%";
                break;
            case 'D':
                cout << "10%";
                break;
        }

        cout << ") : Rs. "
             << computeAllowances() << endl;

        cout << "Gross Salary : Rs. "
             << computeGrossSalary() << endl;

        cout << "--------------------------------------------" << endl;

        cout << "Tax Deduction : Rs. "
             << computeTax() << endl;

        cout << "Net Salary : Rs. "
             << computeNetSalary() << endl;

        cout << "============================================" << endl;
    }

    // Static function
    static int getEmployeeCount()
    {
        return employeeCount;
    }
};


// Static member definitions
int Employee::employeeCount = 0;
int Employee::nextId = 1001;


int main()
{
    // One object on stack
    Employee e1;

    // Two objects on heap
    Employee* e2 = new Employee();
    Employee* e3 = new Employee();

    // Accept details
    e1.acceptDetails();
    e2->acceptDetails();
    e3->acceptDetails();

    /*
        We cannot directly access empId or basicSalary
        because they are private members of Employee.
        Private data can only be accessed through
        public member functions such as getters and setters.
    */

    // e1.empId = 999;
    // e1.basicSalary = -1000;

    // Print payslips
    e1.printPayslip();
    e2->printPayslip();
    e3->printPayslip();

    // Simulate resignation
    e3->deactivate();

    if (!e3->getIsActive())
    {
        cout << e3->getName()
             << " is no longer active. Payroll skipped."
             << endl;
    }

    // Display employee count
    cout << "Total Employees : "
         << Employee::getEmployeeCount()
         << endl;

    // Free heap memory
    delete e2;
    delete e3;

    return 0;
}