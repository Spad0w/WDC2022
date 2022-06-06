#include <iostream>

using namespace std;

extern bool ascending(int array[], int n);

int main () {
    
    int array[] = {7, 17, 25, 50, 77};
    
    int n = sizeof(array) / sizeof(array[0]);
    
    if (ascending(array, n)) {
        
        cout << "True" << endl;
    }
    
    else {
        
        cout << "False" << endl;
    }
    
    return 0;
}
