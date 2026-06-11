#include <bits/stdc++.h>
using namespace std;

/**
 * Approach 1: Sorting Method
 * Time Complexity: O(n log n + m) where n = number of strings, m = length of prefix
 * Space Complexity: O(1)
 *
 * Idea: After sorting, only compare first and last string
 */
string longestCommonPrefixSorting(vector<string> &arr)
{
    if (arr.empty())
        return "";

    sort(arr.begin(), arr.end());

    string first = arr[0];
    string last = arr[arr.size() - 1];
    string ans = "";

    for (int i = 0; i < first.size(); i++)
    {
        if (i >= last.size() || first[i] != last[i])
        {
            return ans;
        }
        ans += first[i];
    }
    return ans;
}

/**
 * Approach 2: Vertical Scanning Method
 * Time Complexity: O(n * m) where n = number of strings, m = length of smallest string
 * Space Complexity: O(1)
 *
 * Idea: Compare characters column by column across all strings
 */
string longestCommonPrefixVertical(vector<string> &arr)
{
    if (arr.empty())
        return "";

    for (int i = 0; i < arr[0].size(); i++)
    {
        char ch = arr[0][i];
        for (int j = 1; j < arr.size(); j++)
        {
            if (i >= arr[j].size() || arr[j][i] != ch)
            {
                return arr[0].substr(0, i);
            }
        }
    }
    return arr[0];
}

int main()
{
    int n;
    cout << "Enter number of strings: ";
    cin >> n;
    cin.ignore(); // Ignore newline after integer input

    vector<string> arr(n);

    cout << "Enter " << n << " strings:" << endl;
    for (int i = 0; i < n; i++)
    {
        getline(cin, arr[i]);
    }

    // Using Sorting Approach
    string result1 = longestCommonPrefixSorting(arr);
    cout << "\nUsing Sorting Approach: " << result1 << endl;

    // Using Vertical Scanning Approach
    string result2 = longestCommonPrefixVertical(arr);
    cout << "Using Vertical Scanning: " << result2 << endl;

    return 0;
}