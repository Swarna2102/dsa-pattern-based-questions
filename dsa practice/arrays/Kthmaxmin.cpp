#include <iostream>
#include <algorithm>  // for sort
using namespace std;

int main() { //sort kro pehle ,ab itna dimag toh hoga hi aptitude mai padha hai ,left se position di hai toh right se kese calculate krte hai,
  //bus 0 based indexing hai toh (n-k) return krenge or minimum ke liye ek chota ,jo ki hai k-1.

  
    int arr[] = {7, 4, 6, 3, 9, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    sort(arr, arr + n);  // ascending order

    cout << k << "th minimum = " << arr[k - 1] << endl;
    cout << k << "th maximum = " << arr[n - k] << endl;

    return 0;
}
