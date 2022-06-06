#include <iostream>

using namespace std;

// Function that given an array of integers and its length, will determine if the elements are in descending order or not
bool descending(int array[], int n) {
    
    if (n == 0 || n == 1) {
        
        return false;
    }
    
    // Check if previous element is bigger than current element
    // If it's bigger, return true
    for (int i = 1; i < n; i++) {
        
        if (array[i - 1] > array[i]) {
            
            return true;
        }
    }
    
    return false;
}
