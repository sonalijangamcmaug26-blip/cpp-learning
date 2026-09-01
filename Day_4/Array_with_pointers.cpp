// Pointers in C++ are variables that store the address of another variable while arrays are the data structure that stores the data in contiguous memory locations.
// In C++, we can manipulate arrays by using pointers to them.
// These kinds of pointers that point to the arrays are called array pointers or pointers to arrays.
// It is the pointer to the first element of the array instead of the whole array but we can access the whole array using pointer arithmetic.

#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptrArr = arr;                       // declaration of a pointer to an array
    cout << "arr  " << " " << arr << endl; // array name itself is a pointer to its first element storing its address loc

    cout << "*arr  " << " " << *arr << endl; // deref its 1st element

    cout << "ptrArr  " << " " << ptrArr << endl; // prints array address

    cout << "*ptrArr " << " " << *ptrArr << endl; // deref array and prints its value

    cout << "arr [1] = " << " "<< arr[1] << endl; //

    cout << "*(ptrArr + 1) =  " << *(ptrArr + 1)<<endl; // we can access array element usin ptr in this way
}

// ḍynamic allocation
// int* arr1 = new int[3];	// dynamic memory allocation -> heap

