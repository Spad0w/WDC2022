#include <iostream>

using namespace std;

extern double average(int array[], int n);

int main() {
    
    int array[5] = {7, -3, 2, 6, 8};
    
    cout << average(array, 5) << endl;
    
    return 0;
}
