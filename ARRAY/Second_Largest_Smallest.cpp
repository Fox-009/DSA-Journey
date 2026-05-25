#include <bits/stdc++.h>
using namespace std;
void largestsmallest(int *arr, int n, int &largest, int &smallest)
{

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
}
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

    largestsmallest(arr, n, largest, smallest);

    int Second_Smallest = INT_MAX;
    int Second_largest = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (Second_Smallest > arr[i] && smallest < arr[i])
        {
            Second_Smallest = arr[i];
        }
        if (Second_largest < arr[i] && largest > arr[i])
        {
            Second_largest = arr[i];
        }
    }

    delete[] arr;

    cout << "Secon Largest element: " << Second_largest << endl;
    cout << "Second Smallest element: " << Second_Smallest << endl;

    return 0;
}