#include <iostream>

using namespace std;

extern bool fanarray(int array[], int n);

int main () {
    
    int array[5] = {5, 6, 7, 6, 5};
    
    int n = sizeof(array) / sizeof(array[0]);

    fanarray(array, n);

    return 0;
}
