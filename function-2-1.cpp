#include <iostream>

using namespace std;

// Function that finds the minimum (smallest) number
int minimum(int array[], int n) {
    
    // Initialise array
    int min_number = array[0];
    
    for (int i = 0; i < n; i++) {
        
        // Compare array sizes, if min_number is smaller than array[i] then we found the smallest number in the array
        if (min_number > array[i]) {
            
            min_number = array[i];
        }
    }
    
    return min_number;
}
