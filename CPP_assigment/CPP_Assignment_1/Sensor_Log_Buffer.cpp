// Requirements:
// 1. Accept N from the user (1 ≤ N ≤ 100), then read N temperature values into an array
// 2. Print all valid readings — skip values below 0 (sensor error) using continue
// 3. Scan for the first reading at or above 45°C — print its index and stop scanning using break
// 4. Compute min, max, and average in one single loop pass
// 5. Count readings per category: Normal / Warning / Critical / Shutdown

// #include <iostream>
// #include <cmath>
// using namespace std;
// int main(){
//     int N;
//     cout<<"Enter the number of readings u want : "<<endl;
//     cin>>N;
//     cout<<"Number of Readings are  : " << N <<endl;
   

//     double arrN[100];
//     for (int i = 0; i < N; i++){
//         cin>> arrN[i];
//     }
     
    
//     for(int i = 0; i < N ; i++){
//         if(arrN[i]< 0){
//             continue;

//         } else if(arrN[i] >= 45) {
//              cout<<"Index"<<" "<< i <<endl;
//                 break;
//             }
//             cout<<"valid readings"<<arrN[i] <<endl;
//         }
//     double minValue = arrN[0];
//     double maxValue = arrN[0];
//     double total = 0.0;    
//     for (int i = 0; i < N; i++){
//          minValue  = min(minValue, arrN[i]);
//          maxValue = max(maxValue, arrN[i]);
//         total+=arrN[i];

//     }   
//     double average = total / N;
    
//     cout<<"MINIMUM: " <<minValue <<endl;
//     cout<<"MAXIMUM: "<<maxValue<<endl;
//     cout<<"Average :"<<average<<endl;
        
//     }

#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int N;

    cout << "Enter the number of readings: ";
    cin >> N;

    if (N < 1 || N > 100) {
        cout << "Invalid number of readings!" << endl;
        return 0;
    }

    double arrN[100];

    cout << "Enter " << N << " temperature readings:" << endl;

    for (int i = 0; i < N; i++) {
        cin >> arrN[i];
    }

    // Variables for min, max and average
    double minValue = 0;
    double maxValue = 0;
    double total = 0;
    int validCount = 0;

    // Category counters
    int normal = 0;
    int warning = 0;
    int critical = 0;
    int shutdown = 0;

    bool firstValid = true;

    // Single loop pass
    for (int i = 0; i < N; i++) {

        // Skip sensor errors
        if (arrN[i] < 0) {
            continue;
        }

        // Print valid reading
        cout << "Valid reading: " << arrN[i] << endl;

        // Find first reading >= 45
        if (arrN[i] >= 45) {
            cout << "First reading at or above 45 degree C found at index: "
                 << i << endl;
            break;
        }

        // Min, max and average
        if (firstValid) {
            minValue = arrN[i];
            maxValue = arrN[i];
            firstValid = false;
        } else {
            minValue = min(minValue, arrN[i]);
            maxValue = max(maxValue, arrN[i]);
        }

        total += arrN[i];
        validCount++;

        // Categories
        if (arrN[i] < 30) {
            normal++;
        }
        else if (arrN[i] < 40) {
            warning++;
        }
        else if (arrN[i] < 45) {
            critical++;
        }
        else {
            shutdown++;
        }
    }

    // Average
    if (validCount > 0) {
        double average = total / validCount;

        cout << "\nMinimum: " << minValue << endl;
        cout << "Maximum: " << maxValue << endl;
        cout << "Average: " << average << endl;
    }

    cout << "\nCategory counts:" << endl;
    cout << "Normal: " << normal << endl;
    cout << "Warning: " << warning << endl;
    cout << "Critical: " << critical << endl;
    cout << "Shutdown: " << shutdown << endl;

    return 0;
}
