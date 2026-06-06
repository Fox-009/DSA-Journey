#include <bits/stdc++.h>
using namespace std;

// By iteration;
// This file implements binary search in two ways:
// 1) binaryIterative - iterative approach
// 2) binaryRecursive - recursive approach
// Both require the input vector to be sorted in ascending order.

// Iterative binary search
// Time complexity: O(log n)
// Space complexity: O(1)
int binary(vector<int> &arr, int target)
{
    int n = arr.size();
    int high = n - 1;
    int low = 0;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else if (arr[mid] > target)
        {
            high = mid - 1;
        }
        else
            return mid;
    }
    return -1;
}

// By recursion
// Recursive binary search helper
// Time complexity: O(log n)
// Space complexity: O(log n) due to recursion call stack

int binaryre(vector<int> &arr, int target, int low, int high)
{
    if (low >= high)
        return -1;
    int mid = low + (high - low) / 2;
    if (arr[mid] == target)
        return mid;
    else if (arr[mid] > target)
    {
        return binaryre(arr, target, low, mid - 1);
    }
    else
    {
        return binaryre(arr, target, mid + 1, high);
    }
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

    int index = binary(arr, target);
    int result = binaryre(arr, target, 0, n - 1);
    if (index >= 0)
    {
        cout << "Target found at index " << index << "\n";
    }
    else
    {
        cout << "Target not found\n";
    }

    if (result >= 0)
    {
        cout << "Target found at index " << index << "\n";
    }
    else
    {
        cout << "Target not found\n";
    }

    return 0;
}