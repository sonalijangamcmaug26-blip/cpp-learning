// Requirements:
// 1. Accept N from the user (1 ≤ N ≤ 100), then read N temperature values into an array
// 2. Print all valid readings — skip values below 0 (sensor error) using continue
// 3. Scan for the first reading at or above 45°C — print its index and stop scanning using break
// 4. Compute min, max, and average in one single loop pass
// 5. Count readings per category: Normal / Warning / Critical / Shutdown


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

    double temp_reading[N];

    cout << "Enter " << N << " temperature readings:" << endl;

    for (int i = 0; i < N; i++) {
        cin >> temp_reading[i];
    }

    // Variables for min, max and average
    double minValue = INT_MAX;
    double maxValue = INT_MIN;
    int first_index_greater_than_fortyfive = N; 
    double total = 0;
    int validCount = 0;

    // Category counters
    int normal = 0;
    int warning = 0;
    int critical = 0;
    int shutdown = 0;
    // Scan for the first reading at or above 45°C
    for (int i = 0; i < N; i++) {

        // Skip sensor errors
        if (temp_reading[i] < 0) {
            continue;
        }

        // Print valid reading
        cout << "Valid reading: " << temp_reading[i] << endl;
        validCount++;
        // Category counter
        if (temp_reading[i] < 30) {
            normal++;
        }
        else if (temp_reading[i] < 40) {
            warning++;
        }
        else if (temp_reading[i] < 45) {
            critical++;
        }
        else {
            shutdown++;
        }
        // min max and total 
        minValue = min(minValue , temp_reading[i]);
        maxValue = max(maxValue,temp_reading[i]);
        total += temp_reading[i];

        // Find first reading >= 45
        if (temp_reading[i] >= 45) {
            first_index_greater_than_fortyfive = i;
            cout << "First reading at or above 45 degree C found at index: "
                 << i << endl;
            break;
        }

    }
    // Scanning after first_index_greater_than_fortyfive

    for(int i= first_index_greater_than_fortyfive+1; i< N; i++){
        if (temp_reading[i] < 0) {
            continue;
        }

        // Print valid reading
        cout << "Valid reading: " << temp_reading[i] << endl;
        validCount++;
        // category counters
        if (temp_reading[i] < 30) {
            normal++;
        }
        else if (temp_reading[i] < 40) {
            warning++;
        }
        else if (temp_reading[i] < 45) {
            critical++;
        }
        else {
            shutdown++;
        }
        // min max and total
        minValue = min(minValue , temp_reading[i]);
        maxValue = max(maxValue,temp_reading[i]);
        total += temp_reading[i];


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