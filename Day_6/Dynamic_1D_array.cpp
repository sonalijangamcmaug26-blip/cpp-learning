#include <iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter the size of array : " <<endl;
    cin>>size;
    // this line indicates that we can created a pointer array which is pointing to an integer array of size size
    int *array = new int[size];

    // input values using for 
    cout<<"enter " << size  <<" " << "elements "<<endl;
    for(int i=0; i < size; i++){
        cin>>array[i];
    }

    // output values
    cout<< "your values : " <<endl;
    for(int i=0; i < size; i++){
        cout<<array[i] << " " ;
    }
    cout<< " "<<endl;

    delete[] array;

    return 0;


}