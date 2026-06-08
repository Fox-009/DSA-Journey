#include <bits/stdc++.h>
using namespace std;
// Upper bound (binary search variant)
// Finds the index of the first element in a sorted array that is strictly
// greater than `target`. If no such element exists, returns `n`.
//
// Notes:
// - Input `arr` must be sorted in non-decreasing order.
// - Time complexity: O(log n). Space complexity: O(1).
//
// Parameters:
// - arr: reference to the vector of integers (sorted)
// - n: size of the vector
// - target: value to find the upper bound for
// Returns:
// - index of the first element > target, or `n` if none exists
int ub(vector<int> &arr, int n, int target)
{
    int low = 0;
    int high = n - 1;
    // Default answer is `n` to indicate "not found" (past-the-end index)
    int ans = n;

    // Standard binary search loop. We move `high` leftwards when we find
    // an element > target (a candidate), but continue searching left to
    // find the first such occurrence. Otherwise move `low` rightwards.
    while (low <= high)
    {
        int mid = low + (high - low) / 2; // avoids overflow

        // If arr[mid] is greater than target, mid is a candidate for the
        // upper bound. Record it and search left to find the first one.
        if (arr[mid] > target)
        {
            ans = mid;
            high = mid - 1; // look for earlier index > target
        }
        else
        {
            // arr[mid] <= target, so upper bound must be to the right
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
    // Prompt the user. The algorithm assumes the input is sorted.
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