#include <bits/stdc++.h>
using namespace std;
int tell(vector<int> &arr, int n)
{
    int mini = arr[0];
    int profit = 0;
    for (int i = 0; i < n; i++)
    {
        int cost = arr[i] - mini;
        profit = max(profit, cost);
        mini = min(arr[i], mini);
    }
    return profit;
}
int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> arr;
    cout << "Enter the element: ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    int result = tell(arr, n);
    cout << result << endl;
}
