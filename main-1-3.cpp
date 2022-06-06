#include <iostream>

using namespace std;

extern int count(int array[], int n, int number);

int main() {
    
    int array[] = {5, 7, 7, 10, 11, 7, 1, 6, 9, 3};
    
    int n = sizeof(array) / sizeof(array[0]);
    
    int number = 7; // You want to see how many elements are equal to this number
    
    cout << "There are " << count(array, n, number) << " elements in the array equal to 7" << endl;
    
    return 0;
}
