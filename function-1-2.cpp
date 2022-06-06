#include <iostream>

// Function that returns the average of all elements in an integer array
double average(int array[], int n) {
    
    double sum;
    double total = 0;
    
    for (int i = 0; i < n; i++) {
        
        total += array[i];
    }
    
    sum = total / n;
    
    return sum;
}
