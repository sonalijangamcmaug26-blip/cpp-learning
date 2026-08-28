#include <iostream>
using namespace std;
void swapping(int a, int b){
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

// Here in the swapping function we are just passing the values of a and b thus it only changes in the swapping function
// This happens because the variables have different scopes.

// The "a" inside main() has local scope to main(), while the parameter "a" inside swapping() belongs to swapping().

// So we use pass by reference to actually get the passes argument value by creating a reference variable or passing their reference in the functions parameter.

// #include <iostream>
// using namespace std;
// void swapping(int &a, int &b){ // here u r passing the reference of a and b which will modify their value directly.
//     cout<< "Before swapping : (INSIDE)" << a <<" " << b <<endl;
//     int temp = a;
//     a = b;
//     b = temp;
//     cout<< "After swapping : (INSIDE)" << a <<" " << b <<endl;

// }

// int main(){
//     int a = 10;
//     int b = 20;
//     swapping(a,b);
//     cout<< "Before swapping : (OUTSIDE)" << a <<" " << b <<endl;
//     return 0;

// }


// Write a function change() that takes an integer by value and changes it to 100.

#include <iostream>
using namespace std;
void change(int x){
    x = 10;
    cout<< "Before change : " << x <<endl;
    
}
int main(){
    int x = 19;
    change(x);
    cout<<"Main function : "<< x << endl;
    return 0;
}