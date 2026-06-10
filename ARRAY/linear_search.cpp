#include <bits/stdc++.h>
using namespace std;
int linear(vector<int> &arr, int find, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == find)
            return i;
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int find;
    cout << "Enter the element you want to find: ";
    cin >> find;
    int result = linear(arr, find, n);
    if (result != -1)
    {
        cout << "found" << " " << result;
    }
    else
    {
        cout << "Not found";
    }
}