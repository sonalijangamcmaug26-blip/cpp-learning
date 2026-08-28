

// Function overloading is needed in C++ to execute similar logical operations on different data types or numbers of inputs using a single, intuitive function name. 
// Without function overloading, programmers would have to invent and remember unique names for every variation of a function (such as add_int(), add_double(), and add_three_ints()). This creates messy code and increases cognitive load.
// compile time polymorphism 
// also known as static and early binding

#include <iostream>
using namespace std;
 int add(int a, int b){
    return a+b;
 }

 int add(int a, int b, int c){
    return a+b+c;

 }

 int multiply(double a, double b){
    return a * b;
 }

 int multiply(int a, double b){
    return a * b;
 }

 double getFarenheit(int temp = 37){	// default argument
	return (temp * 1.8) + 32;
}

 int main() {
	int a = 10;
	int b = 10;
	int c = 20;

	cout << add(a,b) << endl;
	cout << add(10.5f, 23.3f) << endl;
	cout << add(a,b,c) << endl;
	cout << add(a,b) << endl;

//	cout << subtract(a, b) << endl;
	cout << multiply(a,b) << endl;


	cout << getFarenheit(40) << endl;


	return 0;
}