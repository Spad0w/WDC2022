#include <iostream>

using namespace std;

// Function that given an array of integers, and its length, determine if it's a fan array
bool fanarray(int array[], int n) {
    
    int flag = 0;

    for (int i = 0; i <= n / 2 && n != 0; i++) {

        if (array[i] != array[n - i - 1]) {
            flag = 1;
            
            break;
        }
    }

    if (flag == 1) {
     
        cout << "Array is not a fan array" << endl;
    }
    else {
     
        cout << "Array is a fan array" << endl;
    }

    return 0;
}
