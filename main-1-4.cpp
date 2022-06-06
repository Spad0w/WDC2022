#include <iostream>

using namespace std;

extern int sumtwo(int array[], int secondarray[], int n);

int main() {
    
    int array[5] = {1, 2, 3, 4, 5};
    
    int secondarray[5] = {6, 7, 8, 9, 10};
    
    cout << sumtwo(array, secondarray, 5) << endl;
    
    return 0;
}
