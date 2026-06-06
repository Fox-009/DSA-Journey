#include <bits/stdc++.h>
using namespace std;

// Optimal
int Floor(vector<int> &arr, int n, int target)
{
    int low = 0;
    int high = n - 1;
    int ans = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        // Look for more smalller index on the left side:
        if (arr[mid] <= target)
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
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
    int result = Floor(arr, n, target);
    if (result != -1)
    {
        cout << arr[result] << endl;
    }
    else
        cout << "Element does not exist";
    // better option you can also use stl function lower_bound(arr.begin(),arr.end(),n);
    return 0;
}