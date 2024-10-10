/*
The code is supposed to calculate the factorial of a number entered by the user.
Factorial of a number n is n!
n! = n*(n-1)*(n-2)*...*1
*/

#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: 
    cin >> n;
    
    int factorial = 1;
    
    for (int i = 1; i <= n i++) {
        factorial *= i;
    }
    
    cout << "Factorial of " << n << " is " << factorial << endl;
    
    return 0;
}
