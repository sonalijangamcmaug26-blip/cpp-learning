// A reference variable is another name (alias) for an existing variable.
// 2. Changing the reference changes the original
// 3. Reference variable does NOT create a copy
// 4. reference variable must be initialized when declared.



#include <iostream>
using namespace std;
int main(){
    int a = 10;
    int &re = a; // reference variable
    
    cout<< a << "" << re << " "  <<endl;

}
