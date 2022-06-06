#include <iostream>

using namespace std;

extern int maximum(int array[], int n);

int main () {
    
    int n;
    
    cout << "Enter array size: ";
    cin >> n;
    
    int array[n];
    
    cout << "Enter the integers: " << endl;
    
    for (int i = 0; i < n; i++) {
        
        cin >> array[i];
    }
    
    cout << "Biggest number in the array is " << maximum(array, n) << endl;
    
    return 0;
}

