#include <iostream>
using namespace std;

bool isSorted(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            return false;  // If current element is smaller than previous, not sorted
        }
    }
    return true;  // Array is sorted
}

int main() {
    int arr[] = {1, 2, 2, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (isSorted(arr, n)) {
        cout << "Array is sorted." << endl;
    } else {
        cout << "Array is not sorted." << endl;
    }
    return 0;
}
