#include <iostream>

using namespace std;

extern int minimum(int array[], int n);

int main() {
    
    int n;
    
    cout << "Enter size of the array: ";
    cin >> n;
    
    int array[n];
    
    cout << "Enter the integers: " << endl;
    
    for (int i = 0; i < n; i++) {
        
        cin >> array[i];
    }
    
    cout << "Smallest number in the array is " << minimum(array, n) << endl;
    
    return 0;
}
