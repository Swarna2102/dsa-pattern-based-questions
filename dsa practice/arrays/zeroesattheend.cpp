//dekh bhai do pointer ka use hoga ,ek jo aage traverse karega or ek jo non zero elements ko point krega


#include <iostream>
using namespace std;

void moveZeroes(int arr[], int n) {
    int j = 0; // pointer for non-zero elements

    // Step 1: Move all non-zero elements to the front
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[j] = arr[i];
            j++;
        }
    }

    // Step 2: Fill the rest with zeros
    while (j < n) {
        arr[j] = 0;
        j++;
    }

    // Print result
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[] = {0, 1, 0, 3, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    moveZeroes(arr, n);
    return 0;
}
