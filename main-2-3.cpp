#include <iostream>

using namespace std;

extern void twofivenine(int array[], int n);

int main () {
    
    int array[] = {2, 7, 7, 5, 5, 5, 9, 9, 7, 9};
    
    int n = sizeof(array) / sizeof(array[0]);
    
    twofivenine(array, n);
    
    return 0;
}
