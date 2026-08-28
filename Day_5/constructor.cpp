#include <iostream>
using namespace std;
class Student{
    int rollno;
    string name;
    int age;
    const string course ;
 

    // When u define a parameterized constructor it is required to define a default one too
    // modern way to write the constructor :
    // Student() : rollno(0), name(" "), age(0){
    // }


    public:
    Student(){
        rollno = 0;
        name = " ";
        age = 0;
        
    }

    //Parameterized constructor 

    Student(int r, string n, int a){
        rollno = r;
        name = n;
        age = a;
        
    }
    // CONTRUCTOR OVERLOADING 

    Student(int r, string courseName) : rollno(r), course(courseName){
        cout<<"para of val-2"<<endl;

    }
        

    void getinfo(){
        cout<<"Enter the details:"<<endl;
        cin>>rollno >> name>>age;
    }

    void setinfo(){
        cout<<"====Student details====";
        cout<<"ROLL NO : "<< rollno <<"  "<<endl;
        cout<<"Name : " << name << "  "<<endl;
        cout<<" age: " <<age << " "<<endl;
        cout<<"Course_Name "<<course << "  " <<endl;
    }

    ~Student(){
        cout<<"destructor.."<< rollno <<endl;
    }

};

int main(){
    Student s(10, "sonali", 22);
    Student s1(10, "EXTC");
    Student s2;


    s.setinfo();
    s1.setinfo();
    s2.getinfo();
    s2.setinfo();
}