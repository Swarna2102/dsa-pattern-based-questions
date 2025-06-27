#include <iostream>
#include <climits>
using namespace std;

int kadane(int arr[], int n) {
    int maxSum = INT_MIN;  // Smallest integer initially
    int currentSum = 0;

    for (int i = 0; i < n; i++) {
        currentSum += arr[i];

        if (currentSum > maxSum)
            maxSum = currentSum;

        if (currentSum < 0)
            currentSum = 0;  // reset current sum if negative
    }

    return maxSum;
}

int main() {
    int arr[] = {-2, 3, 2, -1, 4, -5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Maximum subarray sum is: " << kadane(arr, n) << endl;

    return 0;
}
