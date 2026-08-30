// enum is a user-defined data type in C++ that consists of integral constants, and each of them is given a
// name.
// It is used to assign names to the integral constants which makes a program easy to read and maintain.
// It is used to define a set of named integral constants that can be used to represent a collection of
// related values.
// It can be implicitly converted to an integer type, which can lead to accidental misuse of enumerators.
// We can explicitly assign values to the enumerators, or let the compiler assign them automatically
// starting from 0

// Syntax:
// enum enum_name { value1, value2, ..., valueN }

#include <iostream>
using namespace std;
enum Day{
// Monday = 1, Tuesday = 2, Wednesday = 3, Thursday = 4, Friday = 5, Saturday = 
//  6, Sunday = 7
//Default:  0,1,2,3,4,5,6,7

    Monday = 1, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday
};
enum codes{
    hi = 10, hey, hello = 20, yo, namaste = 30, hola
};
enum StatusCodes{
    NotModified = 304, OK = 200, NotFound = 404, InternalServerError = 500
};
//enum color{
// Red, Blue, Orange, Black, White
//};
//
//enum TrafficSignal{
// Red, Green, Yellow
//};
enum class color{
    Red, Blue, Orange, Black, White
};
enum class TrafficSignal{
    Red, Green, Yellow
};
int main(){
    color c = color::Red;
    Day day = Monday;
// int col = color::Red; //error: cannot convert 'color' to 'int'

    int col = static_cast<int>(color::Red); // static cast

// cout << c << endl; // not allowed :error for operator overloading<<
    cout << day << endl;
    cout << col << endl;
    return 0;
}
