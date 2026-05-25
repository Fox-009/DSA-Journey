#include <bits/stdc++.h>
using namespace std;

void left_rotate(int *arr, int n, int rotat)
{
    rotat = rotat % n;
    reverse(arr, arr + rotat);
    reverse(arr + rotat, arr + n);
    reverse(arr, arr + n);
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

    int rotat;
    cout << "Enter by what value you want to rotate: ";
    cin >> rotat;

    left_rotate(arr, n, rotat);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    delete[] arr;

    return 0;
}