#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int arr[] = {2, 3, 2, 5, 6, 3, 2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    unordered_map<int, int> freq;  // map to store element and its frequency

    // Count frequency of each element
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    // Print frequencies
    cout << "Element frequencies:\n";
    for (auto &pair : freq) {
        cout << pair.first << " occurs " << pair.second << " times\n";
    }

    return 0;
}
