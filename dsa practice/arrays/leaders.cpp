// all the elements to the right are smaller than the leader.

#include <iostream>
using namespace std;

void printLeaders(int arr[], int n) {
    int maxSoFar = arr[n - 1];
    cout << maxSoFar << " ";  // Last element is always a leader

    // Traverse the array from second last element to start
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > maxSoFar) {
            maxSoFar = arr[i];
            cout << maxSoFar << " ";
        }
    }
}

int main() {
    int arr[] = {16, 17, 4, 3, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Leaders in the array are: ";
    printLeaders(arr, n);

    return 0;
}
