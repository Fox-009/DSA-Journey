#include <bits/stdc++.h>
using namespace std;
// void insertion_sor(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         int j = i;
//         while (j > 0 && arr[j - 1] > arr[j])
//         {
//             int temp = arr[j - 1];
//             arr[j - 1] = arr[j];
//             arr[j] = temp;
//             j--;
//         }
//     }
// }

void bubble(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int didswap = 0;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int tempp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tempp;
                didswap = 1;
            }
        }
        if (didswap != 1)
            break;
    }
}

void selection(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int mini = i;
        for (int j = i; j < n; j++)
        {
            if (arr[mini] > arr[j])
            {
                mini = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[mini];
        arr[mini] = temp;
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // insertion_sor(arr, n);
    bubble(arr, n);
    cout << "After sorting: \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}