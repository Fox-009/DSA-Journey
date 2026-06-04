// All elements appear exactly twice
// except one element.

#include <bits/stdc++.h>
using namespace std;
int get(vector<int> &arr, int n)
{
    int XOR = 0;
    for (int i = 0; i < n; i++)
    {
        XOR = XOR ^ arr[i];
    }
    return XOR;
}
int main()
{
    int n;
    cout << "Enter the number of element: ";
    cin >> n;
    vector<int> arr;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    int result = get(arr, n);
    cout << result;
}