#include <iostream>

using namespace std;

// Function that counts the number of even numbers between 1 and a number we supply (inclusive)
int count_even(int number) {

    int count = 0;

    if (number < 1) {
        return 0;
    }

    else {
        for (int i = 1; i <= number; i++) {
            if (i % 2 == 0) {
                count++;
            }
        }
    }

    return count;
}
