#include <iostream>
using namespace std;
class Student{
    int rollNo;
    string name;
    int age;
    const string course ;
 // default constructor
    public:
	Student() : rollNo(0), name(""), age(0), course(""){
		cout << "default cons..." <<endl;
	}

	// parameterised constructor
	Student(int r, string n, int a, string c) : rollNo(r), name(n), age(a), course(c){
		cout << "para cons..." <<endl;
	}

	// member functions
	void acceptDetails(){
		cout << "Enter Student Details: " << endl;
		cin >> rollNo >> name >> age;
	}

	void displayDetails(){
		cout << "========= Student Details =========" << endl;
		cout << "Roll No: " << rollNo << endl;
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
		cout << "Course: " << course << endl;
	}

	~Student(){
		cout << "destructor.."  << rollNo << endl;
	}
};

int main(){


    Student *s1 = new Student(); //heap : dyanamic allocation
    Student *s2 = new Student(10 ," sonali ", 22 , "AC");

    s1->displayDetails();  // syntax for calling heap obj with a method
    s2->displayDetails();

    delete s1;
    delete s2; // it is expected to delete the obj after it is used 

    return 0;





}