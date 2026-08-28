#include <iostream>
using namespace std;
int main(){
    int a = 10;
    int *p = &a; //ptr to a; 
    int **pp = &p; // 
    **pp = 20;
    cout<< a << *p << **pp <<endl;

    
	int arr[]{10,20,30};

	int *ptrArr = arr;		// pointer to arr
	int &ref = arr[2];

    cout << *ptrArr << endl;
	cout << ref << endl;
}