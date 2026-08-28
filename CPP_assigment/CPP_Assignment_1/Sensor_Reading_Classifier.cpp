//  Store the reading as double, derive a status code as int using if-else
// Use switch on the status code to print the action
// Use the ternary operator to print Above Average or Below Average relative to 25°C (normal operating temperature)
// Print the temperature in Fahrenheit as well: F = (C × 9 / 5) + 32

#include <iostream>
using namespace std;
int main(){

    double range;
    int status_code;

    cout<< " enter the temperature " <<endl;
    cin>> range;

    double  F = (range * 9 / 5) + 32;

    cout << "Temperature: "<< range <<" " <<"degree celcius / " << F <<" "  << "Fahrenheit" <<endl;

    string reading = (range > 25) ? "Above Average" : "Below Average";
    cout<< "READING : "<< reading <<endl;


    if(range < 0){
        status_code = -1;
        cout<< "STATUS : SENSOR_ERROR" << endl;
    } else if (range > 0 && range < 29){ // 0-29
        status_code = 0;
        cout<< "STATUS : NORMAL"<< endl;
    }else if (range <44  && range >30){   //30-44
        status_code = 1;
        cout<<"STATUS : WARNING"<<endl;
    }else if(range <59 && range > 45){   // 45-59
        status_code = 2;
        cout<<"STATUS : CRITICAL"<<endl;

    } else{
        status_code = 3;
        cout<< "STATUS : SHUTDOWN"<<endl;
    }


    switch(status_code){
        case -1 :
            cout<<"ACTION : Sensor fault - check wiring"<<endl;
            break;

        case 0:
            cout<<"ACTION : No action required"<<endl;
            break;

        case 1:
            cout<<"ACTION : Alert sent to supervisor"<<endl;
            break;

        case 2:
            cout<<"ACTION : Cooling system triggered"<<endl;
            break;


        default:
            cout<<"ACTION : Emergency shutdown initiated"<<endl;
            break;


    }
    return 0;

}