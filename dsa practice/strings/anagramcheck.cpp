//ANAGRAM- WHEN TWO STRINGS CONTAIN SAME CHRACTERS IN THE SAME FREQUENCY BUT POSSIBLY IN DIFFERENT ORDER

#include <iostream>
#include <algorithm>
using namespace std;

bool areAnagrams(string str1, string str2) {
    // If lengths are different, not anagrams
    if (str1.length() != str2.length())
        return false;

    // Sort both strings
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    // Compare sorted strings
    return str1 == str2;
}

int main() {
    string str1, str2;
    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;

    if (areAnagrams(str1, str2))
        cout << "Strings are anagrams." << endl;
    else
        cout << "Strings are not anagrams." << endl;

    return 0;
}
