#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double base;
    double exponent;

    cout << "Enter base and exponent: ";
    cin>> base >> exponent;
    double result = std::pow(base, exponent);
    cout<< base << "^" << exponent <<   "is"   <<result<<endl;
    return 0;
}



