#include <bits/stdc++.h>
using namespace std;
// Brute force Use of linear search :

// Optimal
int ub(vector<int> &arr, int n, int target)
{
    int low = 0;
    int high = n - 1;
    int ans = n;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        // Look for more smalller index on the left side:
        if (arr[mid] > target)
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
    int result = ub(arr, n, target);

    cout << "Upper bound index: " << result << endl;

    if (result < n)
        cout << "First element greater than " << target << " is at index " << result << endl;
    else
        cout << "No element greater than " << target << ", returns " << n << endl;

    return 0;
}