#include <bits/stdc++.h>
using namespace std;
bool check(vector<int> &arr, int n)
{
    if (arr[0] <= arr[n - 1])
    {
        for (int i = 1; i < n; i++)
        {
            if (arr[i] >= arr[i - 1])
            {
            }
            else
                return false;
        }
        return true;
    }
    else if (arr[0] >= arr[n - 1])
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] >= arr[i + 1])
            {
            }
            else
                return false;
        }
        return true;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    bool check_s = check(arr, n);
    if (check_s == true)
        cout << "Sorted";
    else
        cout << "Not Sorted";
    return 0;
}