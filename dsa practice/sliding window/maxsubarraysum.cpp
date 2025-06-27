int maxSum(vector<int>& arr, int k) {
    int window_sum = 0;
    // sum of first window
    for (int i = 0; i < k; i++) {
        window_sum += arr[i];
    }

    int max_sum = window_sum;

    // slide the window
    for (int i = k; i < arr.size(); i++) {
        window_sum += arr[i] - arr[i - k]; // remove first element of old window, add new element
        max_sum = max(max_sum, window_sum);
    }

    return max_sum;
}
