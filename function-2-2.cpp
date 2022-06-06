#include <iostream>

using namespace std;

// Function that finds the maximum (biggest) number
int maximum(int array[], int n) {
    
    // Initialiase array
    int maximum_array = array[0];
    
    for (int i = 0; i < n; i++) {
        
        // Compare array sizes, if maximum_array is bigger than array[i] then we found the biggest number in the array
        if (maximum_array < array[i]) {
            
            maximum_array = array[i];
        }
    }
    
    return maximum_array;
}
