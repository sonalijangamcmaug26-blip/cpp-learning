#include <iostream>
#include <string>
using namespace std;

class Student{
    int roll_no;
    string name;
    string branch;
    int age;

    public:
    void getDetails(){
        cout<<"enter students details"<<endl;
        cin>> roll_no >> name>> branch>>age;

    }

    void setDetails(){
        cout<<"=====Students Details===="<<endl;
        cout<<"ROLL NO: "<< roll_no <<endl;
        cout<<"Name"<<   " "<< name<< endl;
        cout<<"branch"<<" "<<branch<<endl;
        cout<<"AGE"<<age <<" " <<endl;
    }

};


int main(){
    Student s;       //// normal obj instansiation 
    s.getDetails();  
    s.setDetails();  
    Student studArr[4]; // Array of object

    for(int i = 0; i < 4; i++){
        studArr[i].getDetails();
    }

    for(int i = 0; i<4; i++){
        studArr[i].setDetails();
    }

    Student *s1 = new Student();  // heap obj creation 
    s1->getDetails();            
    s1->setDetails();            
   

    Student *studArr1 = new Student[2]; // dynamic arr of obj

    for(int i=0;i<3;i++){
		studArr1[i].getDetails();
	}

	for(int i=0;i<3;i++){
		studArr1[i].setDetails();
	}





}