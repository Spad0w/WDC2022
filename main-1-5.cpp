#include <iostream>

using namespace std;

extern int count_even(int number);

int main() {
    
    int x;
    
    cout << "Enter a number: ";
    cin >> x;
    
    cout << "The number of even numbers between 1 and " << x << " is " << count_even(x) << endl;
    
    return 0;
}
