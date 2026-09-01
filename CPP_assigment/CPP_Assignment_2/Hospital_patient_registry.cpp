#include <iostream>
#include <string>
using namespace std;

class Patient
{
private:
    int patientId;
    string name;
    int age;
    string ward;
    const string bloodGroup;

public:

    // Default Constructor
    Patient()
        : patientId(0),
          name("Unknown"),
          age(0),
          ward("General"),
          bloodGroup("O+")
    {
        cout << "[Constructor] Default patient registered."
             << endl;
    }

    // Emergency Constructor
    Patient(int id, const string& name)
        : patientId(id),
          name(name),
          age(0),
          ward("Emergency"),
          bloodGroup("O+")
    {
        cout << "[Constructor] Emergency: "
             << name << endl;
    }

    // Full Admission Constructor
    Patient(int id,
            const string& name,
            int age,
            const string& ward,
            const string& bg)
        : patientId(id),
          name(name),
          age(age),
          ward(ward),
          bloodGroup(bg)
    {
        cout << "[Constructor] Full admission: "
             << name << endl;
    }

    // Destructor
    ~Patient()
    {
        cout << "[Destructor] Patient "
             << name
             << " discharged."
             << endl;
    }

    void displayRecord() const
    {
        cout << "\nPatient Record:" << endl;
        cout << "ID : " << patientId << endl;
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Ward : " << ward << endl;
        cout << "Blood Grp : " << bloodGroup << endl;
    }

    void transferWard(const string& newWard)
    {
        cout << "Ward Transfer: "
             << name << " -> "
             << newWard << endl;

        ward = newWard;
    }
};

int main()
{
    // Three stack objects using different constructors

    Patient p1(
        1001,
        "Meera",
        34,
        "Cardiology",
        "B+"
    );

    Patient p2(
        1002,
        "Raj"
    );

    Patient p3;

    p1.displayRecord();
    p2.displayRecord();
    p3.displayRecord();

    // Dynamic array of 4 patients
    Patient* patients = new Patient[4];

    cout << "\nDynamic Patient Array:\n";

    for (int i = 0; i < 4; i++)
    {
        patients[i].displayRecord();
    }

    // Transfer ward
    patients[0].transferWard("ICU");

    // Delete dynamic array
    delete[] patients;

    cout << "\nStack objects will now be destroyed..."
         << endl;

    return 0;
}