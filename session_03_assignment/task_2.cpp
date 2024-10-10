// The code is supposed to calculate the average of three numbers, but both syntax and logical errors prevent it from working correctly.

#include<iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1, num2, num3;
    
    // Calculate average (logical and syntax errors)
    float average = (num1 + num2 + num3) / 3;
    cout << "The average is: " << average endl;
    
    return 0
}
