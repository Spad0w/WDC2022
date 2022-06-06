#include <iostream>

using namespace std;

extern int sum_array(int array[], int n);

int main () {
    
    int array[5] = {7, -3, 2, 6, 8};
    
    cout << sum_array(array, 5) << endl;
    
    return 0;
}
