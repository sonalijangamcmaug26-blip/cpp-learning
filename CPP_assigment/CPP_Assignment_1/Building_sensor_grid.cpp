// Requirements

// 1. Read temperatures for all 9 rooms into a 2D array (rows = floors, columns = rooms) 
// 2. Display the readings in a formatted table 
// 3. Find and report the hottest room (floor and room number) 
// 4. Find and report the floor with the highest average temperature 
// 5. Count total rooms at or above the WARNING threshold (30°C)

// to find hottest can i can use the max function
// 


#include <iostream>
using namespace std;
int main(){
    int temp[3][3] = {};
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>temp[i][j];
            cout<<temp[i][j] <<endl;

        }
        
    }

}