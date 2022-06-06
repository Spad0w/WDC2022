#include <iostream>

using namespace std;

extern double sumeven(double array[], int n);

int main () {
    
    double array[] = {2, 4, 6, 8, 10};
    int n = sizeof(array) / sizeof(array[0]);

    cout << "Sum of elements in the even positions in an array is " << sumeven(array, n) << endl;

    return 0;
}
