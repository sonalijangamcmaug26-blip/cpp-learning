#include <iostream>
using namespace std;


int main(){
    int rows, cols;
    cout<<"Enter the rows and cols";
    cin>>rows>>cols;
    // here table is a pointer that is pointing to the array of pointer[rows]
    // **table is how we declare a pointer that is pointing to the another pointer 
    // while dynamically creating an array we use new keyword
    // since int[rows] is also an array of pointer we declare it with *[rows]

    int **table = new int*[rows];

    // this loop will run from 0 to size of row for i 
    // and the next line will fill the elements of rows 
    // here [col] is just an array of elements which the *[row] is pointing 
    // that is why it is just initialized with int[col]

    for(int i = 0; i< rows; i++){
        table[i] = new int[cols];
    }

    // input values
    cout<<"Enter values :\n";
    for(int i=0; i < rows; i++){
        for(int j=0; j < cols; j++){
            cin>>table[i][j];
        }
    }

    // output values
    cout<< "==2DARRAY=="<<endl;
    for(int i=0; i < rows; i++){
        for(int j=0; j < cols; j++){
            cout<<  table[i][j]<< " ";
        }
     cout << endl;
    }    
    //It is practiced to delete the dynamically created objects
    // we use delete keyword
    // as this are pointers pointing to another pointer which is pointing to an array 
    // we delete things in reverse order i.e first we delete the col array then *row then **table


    
    for(int i = 0; i< rows; i++){
        delete[] table[i];
    }
    delete table;
    table = NULL;

    return 0;


}