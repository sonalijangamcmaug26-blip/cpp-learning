// A pointer to an object points to the object of its class 
// -> is used to access the object from a class 
// it is used when we create an object of a class created dynamically using the new operator

#include <iostream>
#include <string>
using namespace std;

class Employee{
    public:
    string name;
    void printdetails(){
        cout<<"Your Name? " <<endl;
        cin>>name;
        cout<<"Hello!! " <<name << endl;
    }
};

int main(){
    Employee emp;
    emp.printdetails();

// creating an pointer *empp which is pointing to our obj emp
   Employee *empp = &emp;
   empp -> printdetails();  

//   creating dynamic object of a class is pointer to the object
    Employee *dynamicemp = new Employee();
    dynamicemp -> printdetails();

// changing the value of variable through dynamic obj

    dynamicemp -> name = "SONALI";

    return 0;




}