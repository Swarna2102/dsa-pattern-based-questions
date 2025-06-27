#include <iostream>
#include <unordered_set>
using namespace std;

int findDuplicate(int arr[], int n) {
    unordered_set<int> s;

    for (int i = 0; i < n; i++) {
        if (s.find(arr[i]) != s.end()) {  //s.end() ka matlab hai ki (not found) != yeh laggya toh mtlb if found 
            return arr[i]; // already present → duplicate found
        }
        s.insert(arr[i]); // mark as seen
    }

    return -1; // no duplicate (shouldn't happen if always 1 duplicate)
}

int main() {
    int arr[] = {1, 3, 4, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Duplicate element is: " << findDuplicate(arr, n);
    return 0;
}
