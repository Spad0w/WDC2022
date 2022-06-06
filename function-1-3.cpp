#include <iostream>

using namespace std;

// Function that that returns the number of elements in an array that are equal to a given parameter
int count(int array[], int n, int number) {

    int total = 0;
    
    for (int i = 0; i < n; i++) {

        if (number == array[i]) {
            
        total++;
            
        }
    }
    
    return total;
}
