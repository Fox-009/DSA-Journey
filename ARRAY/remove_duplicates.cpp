#include <bits/stdc++.h>
using namespace std;
int remove(vector<int> &arr, int n)
{
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (arr[i] != arr[j])
        {
            arr[i + 1] = arr[j];
            i++;
        }
    }
    return i + 1;
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
    int index = remove(arr, n);
    for (int i = 0; i < index; i++)
    {
        cout << arr[i] << " ";
    }
}
