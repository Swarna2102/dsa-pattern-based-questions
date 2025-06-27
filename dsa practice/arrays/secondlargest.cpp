#include <iostream>
#include <climits>  // For INT_MIN
using namespace std;

int main() {
    int arr[] = {5, 7, 2, 9, 1, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN) {
        cout << "There is no second largest element.\n";
    } else {
        cout << "The second largest element is: " << secondLargest << endl;
    }

    return 0;
}
