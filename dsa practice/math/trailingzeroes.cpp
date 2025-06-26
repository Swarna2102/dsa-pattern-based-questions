#include <iostream>
using namespace std;

int countTrailingZeroes(int n) {
    int count = 0;

    // Divide n by powers of 5
    for (int i = 5; n / i >= 1; i *= 5) {
        count += n / i;
    }

    return count;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Trailing zeroes in " << n << "! is: " << countTrailingZeroes(n) << endl;

    return 0;
}
