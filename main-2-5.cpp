#include <iostream>

using namespace std;

extern bool descending(int array[], int n);

int main () {
    
    int array[] = {77, 50, 25, 17, 7};
    
    int n = sizeof(array) / sizeof(array[0]);
    
    if (descending(array, n)) {
        
        cout << "True" << endl;
    }
    
    else {
        
        cout << "False" << endl;
    }
    
    return 0;
}
