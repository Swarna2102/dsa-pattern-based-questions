#include <iostream>
using namespace std;

int main() {
    int num, reversed = 0;

    cout << "Enter a number: ";
    cin >> num;

    int original = num;

    while (num != 0) {
        int digit = num % 10;           // Get the last digit
        reversed = reversed * 10 + digit; // Append digit to reversed number
        num /= 10;                      // Remove last digit
    }

    cout << "Reversed number of " << original << " is: " << reversed << endl;

    return 0;
}
