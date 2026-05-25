#include <bits/stdc++.h>
using namespace std;
int binary(int *arr, int find, int n)
{
    int left = 0;
    int right = n - 1;

    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] == find)
        {
            return mid;
        }
        else if (arr[mid] > find)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int *arr = new int[n];
    cout << "Enter the elements: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int find;
    cout << "Enter the element you want to find: ";
    cin >> find;

    int index = binary(arr, find, n);

    if (index != -1)
        cout << "Found at index: " << index;
    else
        cout << "Not found";

    return 0;
}