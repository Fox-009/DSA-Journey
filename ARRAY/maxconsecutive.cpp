#include <bits/stdc++.h>
using namespace std;
int maxcount(vector<int> &arr, int n)
{
    int count = 0;
    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            count++;
            maxi = max(maxi, count);
        }
        else
        {
            count = 0;
        }
    }
    return maxi;
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
    int count = maxcount(arr, n);
    cout << count;
}