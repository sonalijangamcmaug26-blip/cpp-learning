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
    double temp[3][3] = {};
    // double hottest_room = INT_MIN;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>temp[i][j];
        } 
    }
    double hottest_room = temp[0][0];
    int hottest_room_cordinates[2] = {0,0};
    int count = 0;
    double hottest_floor_temp = INT_MIN;
    int hottest_floor = 1;
    cout<<"         Room1   Room2   Room3"<<endl;

    for(int i=0; i<3; i++){
        int current_floor_sum = 0;
        cout<<"Floor "<< i +1 << " : "; //
        // cout<<current_floor_sum; 
    
    

        for(int j=0; j<3; j++){
           double current_temprature = temp[i][j]; 
           current_floor_sum += current_temprature; // 0 + temp[i][j] = 0 + 1 
           cout<<current_temprature << "    ";    // current temprature value 
           if (current_temprature >= 30){
                count++;
                
           }
           if (current_temprature> hottest_room){
            hottest_room = current_temprature;
            hottest_room_cordinates[0] = i + 1;
            hottest_room_cordinates[1] = j + 1;

           }
        }
        // cout<<current_floor_sum; //6 15 26 
        if(current_floor_sum > hottest_floor_temp){
            hottest_floor_temp = current_floor_sum;
            hottest_floor = i+1;
        }

        cout<<endl;

       
    }
    cout<< "Hottest ROOM --> Floor : "<< hottest_room_cordinates[0] << " Room : " << hottest_room_cordinates[1] <<" "<<hottest_room <<endl;
    cout<<"Hottest floor "<< "Floor :" << hottest_floor << " avg " << hottest_floor_temp / 3 <<endl;
    cout<<"Rooms at Warning Threshold or above : "<< count <<endl;
}