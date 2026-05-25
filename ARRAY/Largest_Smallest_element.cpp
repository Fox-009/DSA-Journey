#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;

    cout << "Enter the number of element: ";
    cin >> n;

    int *arr = new int[n];

    cout << "Enter the element: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int largest = arr[0];
    int smallest = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    delete[] arr;

    cout << "Largest Element: " << largest << endl;
    cout << "Smallest Element: " << smallest << endl;

    return 0;
}