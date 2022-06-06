#include <iostream>

using namespace std;

// Function that returns the sum of two arrays as an integer (of equal size)
int sumtwo(int array[], int secondarray[], int n) {
    
    int array_total = 0;
    int secondarray_total = 0;
    
    for (int i = 0; i < n; i++) {
        
        array_total += array[i];
        
        secondarray_total += secondarray[i];
    }
    
    int result = array_total + secondarray_total;
    
    return result;
}
