// So we use pass by reference to actually get the passes argument value by creating a reference variable or
//  passing their reference in the functions parameter.

#include <iostream>
using namespace std;
void swapping(int &a, int &b){ // here u r passing the reference of a and b which will modify their value directly.
    cout<< "Before swapping : (INSIDE)" << a <<" " << b <<endl;
    int temp = a;
    a = b;
    b = temp;
    cout<< "After swapping : (INSIDE)" << a <<" " << b <<endl;

}

int main(){
    int a = 10;
    int b = 20;
    swapping(a,b);
    cout<< "Before swapping : (OUTSIDE)" << a <<" " << b <<endl;
    return 0;

}


// Problem Statement : Write a C++ program with a function increase(int &x) that increases a number by 1.

#include <iostream>
using namespace std;
int increase(int &x){
    cout<<"Before change : (inside)" << x << endl;
    x = x+1;
    return 0;
}

int main(){
    int x = 10;
    increase(x);
    cout<<"After change ; (main function)" << x << endl;
    return 0;


}

// Double a number

#include <iostream>
using namespace std;
void double_num(int &s){
    s = s * s;
    cout<< "IN DOUBLE_NUM : "<< s <<endl;

}

int main(){
    int s = 12;
    double_num(s);
    cout<< "IN MAIN FUNCTION :" << s  <<endl;
    return 0;

}
