//This code is supposed to print the numbers from 1 to 5, but it enters an infinite loop.

#include<iostream>
using namespace std;

int main() {
    int i = 1;
    
    // Loop to print numbers from 1 to 5 (logical error causes infinite loop)
    while (i <= 5) {
        cout << i << endl;
    }
    
    return 0;
}
