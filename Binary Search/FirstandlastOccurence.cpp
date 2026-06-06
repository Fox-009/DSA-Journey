#include <bits/stdc++.h>
using namespace std;

// Brute force
// linear search
// int first = -1;
// int last = -1;
// for(i= 0 --> arr.size()){
//          if(first == -1){
//              first = i;
//          }
//          last = i;
//      }
//   if (first == -1 ) return {-1,-1};
//   else return {first,last};
// }

// Methord 1 -->Using upper and lower bound;
int lb(vector<int> &arr, int n, int target)
{
    int low = 0;
    int high = n - 1;
    int ans = -1;
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

pair<int, int> occ(vector<int> &arr, int n, int target)
{
    int first = lb(arr, n, target);
    int last = ub(arr, n, target);

    if (first == -1 || arr[first] != target)
        return {-1, -1};
    else
        return {first, last - 1};
}

// Methord ---> 2 simple binary search style
int first(vector<int> &arr, int target)
{
    int n = arr.size();
    int high = n - 1;
    int low = 0;
    int first = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
        {
            first = mid;
            high = mid - 1;
        }
        else if (arr[mid] > target)
        {
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    return first;
}

int last(vector<int> &arr, int target)
{
    int n = arr.size();
    int high = n - 1;
    int low = 0;
    int last = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
        {
            last = mid;
            low = mid + 1;
        }
        else if (arr[mid] > target)
        {
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    return last;
}

pair<int, int> occcc(vector<int> &arr, int n, int target)
{
    int f = first(arr, target);

    if (f == -1)
        return {-1, -1};

    int l = last(arr, target);

    return {f, l};
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

    pair<int, int> result1 = occ(arr, n, target);   // Using Method 1
    pair<int, int> result2 = occcc(arr, n, target); // Using methord 2

    cout << "Method 1 (Lower/Upper Bound): ";
    if (result1.first != -1)
        cout << "First: " << result1.first << ", Last: " << result1.second << endl;
    else
        cout << "Element not found" << endl;

    cout << "Method 2 (Modified Binary Search): ";
    if (result2.first != -1)
        cout << "First: " << result2.first << ", Last: " << result2.second << endl;
    else
        cout << "Element not found" << endl;
    return 0;
}