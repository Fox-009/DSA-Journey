#include <bits/stdc++.h>
using namespace std;
// Brute force Use of linear search :

// Optimal
int search(vector<int> &arr, int n, int target)
{
    int low = 0;
    int high = n - 1;
    int ans = n;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        // Look for more smalller index on the left side:
        if (arr[mid] >= target)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " integers (sorted order is required):\n";
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    int target;
    cout << "Enter target value: ";
    cin >> target;
    int result = search(arr, n, target);

    cout << "Insert position: " << result << endl;

    if (result < n && arr[result] == target)
        cout << "Target found at index " << result << endl;
    else
        cout << "Target not found. Would be inserted at index " << result << endl;

    // better option you can also use stl function lower_bound(arr.begin(),arr.end(),n);
    return 0;
}