#include <iostream>
using namespace std;

int main() {
    int num, count = 0;

    cout << "Enter a number: ";
    cin >> num;

    int temp = num;

    // Handle zero separately
    if (num == 0) {
        count = 1;
    } else {
        while (temp != 0) {
            temp /= 10;  // Remove last digit
            count++;
        }
    }

    cout << "Number of digits in " << num << " is: " << count << endl;

    return 0;
}
