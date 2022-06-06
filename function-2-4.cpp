#include <iostream>

using namespace std;

// Function that given an array of integers and its length, will determine if the elements are in ascending order or not
bool ascending(int array[], int n) {
    
    if (n == 0 || n == 1) {
        
        return true;
    }
    // Check if previous element is bigger than current element
    // If it's bigger, return false
    for (int i = 1; i < n; i++) {
        
        if (array[i - 1] > array[i]) {
            
            return false;
        }
    }
    
    return true;
}
