#include <iostream>
using namespace std;

void resetSensorPairV1(int reading1, int reading2){
    cout<< "--- V1: Call by Value ---" <<endl;
    cout<<"Before : "<< " A = "<<reading1 <<"  "<< "B = " << reading2 <<endl;
    int temp = reading1;
    reading1 = reading2;
    reading2 = temp;
   
}

void resetSensorPairV2(int &reading1, int &reading2){
    cout<< "--- V2: Call by Value ---" <<endl;
    cout<<"Before : "<< " A = "<<reading1 <<"  "<< "B = " << reading2 <<endl;
    int temp = reading1;
    reading1 = reading2;
    reading2 = temp;
    
}

void resetSensorPairV3(int *reading1, int *reading2){
    cout<< "--- V3: Call by Value ---" <<endl;
    cout<<"Before : "<< " A = "<<*reading1 <<"  "<< "B = " << *reading2 <<endl;
    int *temp = reading1;
    reading1 = reading2;
    reading2 = temp;
   
}

int main(){
    int reading1;
    int reading2;
    cin>> reading1 >> reading2;

    /*
    Here in the resetSensorPairV1 function we are just passing the values of reading1 and reading2
    thus it only changes in the resetSensorPairV1 function.
    This happens because the variables have different scopes.
    The "reading1" inside main() has local scope to main(), while the parameter "reading1" inside resetSensorPairV1() belongs to resetSensorPairV1().
    When a variable is passed by value to a function, the function receives a distinct, local copy of the data stored in a separate memory allocation on the stack, meaning any modifications made inside the function affect only that local copy and disappear when the function's execution frame goes out of scope upon return
    */

    resetSensorPairV1(reading1,reading2);
    cout<<"After : " << "A = " << reading1 << "  "<<"B = " <<reading2<<endl;

    // So we use pass by reference to actually get the passes argument value by creating a reference variable or passing their reference in the functions parameter.

    resetSensorPairV2(reading1,reading2);
    cout<<"After : " << "A = " << reading1 << "  "<<"B = " <<reading2<<endl;

    resetSensorPairV3(&reading1,&reading2);
    cout<<"After : " << "A = " << reading1 << "  "<<"B = " <<reading2<<endl;


}