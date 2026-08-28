#include <iostream>
using namespace std;
int add(int a, int b){
    return a+b;
}

int calc_area(int side){
    return side*side;
}

int main(){
    cout<<add(9,7)<<endl;
    cout<<calc_area(5)<<endl;
}