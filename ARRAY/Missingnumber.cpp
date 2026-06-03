#include <bits/stdc++.h>
using namespace std;
int missing(vector<int> &arr, int n)
{
    int sum = (n * (n + 1)) / 2;
    int s2 = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        s2 += arr[i];
    }
    return (sum - s2);
}
int main()
{
    int n;
    cout << "Enter the number of element: ";
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n - 1; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    int missing_no = missing(arr, n);
    cout << missing_no;
}