#include <iostream>
using namespace std;
int main(){
    int a = 10;
    int *ptr = &a; // ptr init 
    cout<< a << " " << ptr <<endl; // here ptr willprint address of a as it is pointing to a
    cout<< a << " " << *ptr <<endl; // here ptr is deref a so it will print the value stored in a 
    int **pp = &ptr; 
    cout<< pp << " " // will print address of ptr
    << *pp << " "    // will deref and print what ptr is pointing i.e address of a
    << **pp <<endl;  // deref again and print the value stored at that address
    




}