#include <iostream>

using namespace std;

// Function that returns the sum of the elements in the even positions in an array
double sumeven(double array[], int n) {
    
    int sum = 0;

    for (int i = 0; i < n; i++) {

        if (i % 2 == 0) {

            sum += array[i];
        }
    }

    return sum;
}
