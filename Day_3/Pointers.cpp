// A pointer is a variable that stores the memory address of another variable.
// A pointer has its own memory too.
// int *ptr; -- this is how u declare a pointer
// ptr = &variable; -- this is how u assign a variable's address to a pointer
// int *ptr = &a; -- this is how u initialize a pointer 
// if u want to print what value it is pointing use << *ptr 
// *ptr this is derefrencing
// ptr = &a this is refrencing

// null pointer is is initialized as int *ptr = nullptr;



#include <iostream>
using namespace std;
int main(){
    int a = 10;
    int *ptr ; // this is how we declare  a pointer
    ptr = &a; // assigning address to variable to the pointer 
    int *ptrA = &a; // initialization of ptr with add of a variable
    cout<< a << " "<< ptr << " "<< ptrA << endl;
    cout<< *ptr << endl; // to access the value ptr is pointing 
    return 0;


}