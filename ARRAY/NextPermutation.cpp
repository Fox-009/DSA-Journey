#include <bits/stdc++.h>
using namespace std;
//  Brute
// 1 -> Generate the sorterd order
// 2 -> Linear Search the number
// 3 -> Print the next Index

// Better solution : Use stl fuction called next_permutation();
vector<int> next(vector<int> &arr)
{
    next_permutation(arr.begin(), arr.end());
    return arr;
}

// Optimal Solution: Time: O(N)  and Space: O(1) (ignoring the returned vector copy)
vector<int> ans(vector<int> &arr)
{
    int n = arr.size();
    int idx = -1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] < arr[i + 1])
        {
            idx = i;
            break;
        }
    }
    if (idx == -1)
    {
        reverse(arr.begin(), arr.end());
        return arr;
    }
    for (int i = n - 1; i > idx; i--)
    {
        if (arr[i] > arr[idx])
        {
            swap(arr[i], arr[idx]);
            break;
        }
    }
    reverse(arr.begin() + idx + 1, arr.end());
    return arr;
}
int main()
{
    vector<int> arr;
    int n;
    cout << "Enter the no. of element :";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    vector<int> next_result = ans(arr);
    for (int i = 0; i < n; i++)
    {
        cout << next_result[i] << " ";
    }
}