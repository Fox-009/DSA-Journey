#include <bits/stdc++.h>
using namespace std;
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

    int j = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[j] = arr[i];
            j++;
        }
    }
    while (j < n)
    {
        arr[j] = 0;
        j++;
    }

    cout << "Rearranged array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}