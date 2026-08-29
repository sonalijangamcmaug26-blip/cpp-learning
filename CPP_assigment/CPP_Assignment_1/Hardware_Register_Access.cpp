#include <iostream>
using namespace std;

int main()
{
    int statusReg = 0b10110001;
    int controlReg = 0b00000000;
    int dataReg = 0b11001010;

    // ------------------------------------------------
    // 1. const int* 
    // Pointer can change, value cannot be changed
    // ------------------------------------------------

    const int* regPtr1 = &statusReg;

    cout << "Status Register : " << *regPtr1 << endl;

    // *regPtr1 = 10;       // ERROR: cannot change value
    regPtr1 = &dataReg;    // OK: pointer can point somewhere else


    // ------------------------------------------------
    // 2. int* const
    // Pointer cannot change, value can be changed
    // ------------------------------------------------

    int* const regPtr2 = &controlReg;

    *regPtr2 = 25;         // OK: value can be changed

    cout << "Control Register : " << *regPtr2 << endl;

    // regPtr2 = &dataReg;  // ERROR: cannot change pointer


    // ------------------------------------------------
    // 3. const int* const
    // Neither pointer nor value can change
    // ------------------------------------------------

    const int* const regPtr3 = &dataReg;

    cout << "ROM/Status Register : " << *regPtr3 << endl;

    // *regPtr3 = 50;       // ERROR: cannot change value
    // regPtr3 = &statusReg;  // ERROR: cannot change pointer


    return 0;
}