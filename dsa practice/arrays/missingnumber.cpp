#include <iostream>
using namespace std;

int findMissingNumber(int arr[], int n) {
    int totalSum = n * (n + 1) / 2;  // Sum of first n natural numbers
    int actualSum = 0;

    for (int i = 0; i < n - 1; i++) { //kyuki bhai 1 number missing hai that is why n-1
        actualSum += arr[i];
    }

    return totalSum - actualSum;
}

int main() {
    int arr[] = {1, 2, 4, 5, 6};  // Missing number is 3
    int n = 6;  // Should be from 1 to 6

    int missing = findMissingNumber(arr, n);
    cout << "Missing number is: " << missing << endl;

    return 0;
}
