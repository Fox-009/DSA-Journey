#include <bits/stdc++.h>
using namespace std;
void rev(int arr[], int start, int end)
{
    if (start >= end)
        return;
    swap(arr[start], arr[end]);
    rev(arr, start + 1, end - 1);
}
int main()
{
    int n;
    cout << "Enter the number of element: ";
    cin >> n;
    int arr[n];
    cout << "Enter the terms odf array: " << '\n';
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "The arr terms are: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    rev(arr, 0, n - 1);
    cout << "The reversed arr : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}