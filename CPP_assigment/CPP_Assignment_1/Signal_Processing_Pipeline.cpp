#include <iostream>
#include <cmath>
using namespace std;

// Compute RMS
double computeRMS(double* signal, int n)
{
    double sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + (*(signal + i) * *(signal + i));
    }

    return sqrt(sum / n);
}


// Normalise the signal
void normalise(double* signal, int n)
{
    double maxValue = 0;

    // Find maximum absolute value
    for (int i = 0; i < n; i++)
    {
        if (abs(*(signal + i)) > maxValue)
        {
            maxValue = abs(*(signal + i));
        }
    }

    // Divide every element by max absolute value
    for (int i = 0; i < n; i++)
    {
        *(signal + i) = *(signal + i) / maxValue;
    }
}


// Count zero crossings
int countZeroCrossings(double* signal, int n)
{
    int count = 0;

    for (int i = 0; i < n - 1; i++)
    {
        if ((*(signal + i) > 0 && *(signal + i + 1) < 0) ||
            (*(signal + i) < 0 && *(signal + i + 1) > 0))
        {
            count++;
        }
    }

    return count;
}


// Apply gain
void applyGain(double* signal, int n, double gainFactor)
{
    for (int i = 0; i < n; i++)
    {
        *(signal + i) = *(signal + i) * gainFactor;
    }
}


// Print array
void printArray(double* signal, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << *(signal + i) << " ";
    }

    cout << endl;
}


int main()
{
    double signal[] = {0.5, -1.2, 0.8, -0.3, 1.0, -0.9, 0.1};

    int n = 7;

    cout << "Array before processing: ";
    printArray(signal, n);

    // Compute RMS
    cout << "RMS : " << computeRMS(signal, n) << endl;

    // Count zero crossings
    cout << "Zero Crossings : "
         << countZeroCrossings(signal, n) << endl;

    // Normalise
    normalise(signal, n);

    cout << "After Normalise: ";
    printArray(signal, n);

    // Apply gain
    double gainFactor = 2.0;

    applyGain(signal, n, gainFactor);

    cout << "After Gain: ";
    printArray(signal, n);

    return 0;
}

 