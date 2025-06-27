#include <iostream>
#include <unordered_map>
using namespace std;

int countPairsWithSum(int arr[], int n, int targetSum) {
    unordered_map<int, int> freq;
    int count = 0;

    for (int i = 0; i < n; i++) {
        int complement = targetSum - arr[i];
        // Check if complement exists in the map
        if (freq.find(complement) != freq.end()) {
            count += freq[complement];
        }
        // Add current element to map
        freq[arr[i]]++;
    }

    return count;
}

int main() {
    int arr[] = {1, 5, 7, -1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int targetSum = 6;

    cout << "Number of pairs with sum " << targetSum << " is: " << countPairsWithSum(arr, n, targetSum) << endl;

    return 0;
}
