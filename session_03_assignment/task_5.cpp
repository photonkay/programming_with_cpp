// The code is supposed to calculate the sum of all odd numbers between 1 and a given number n.

#include<iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            sum += i;
        }
    }
    
    cout << "Sum of odd numbers: " << sum << endl;
    
    return 0;
}
