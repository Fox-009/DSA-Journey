#include <bits/stdc++.h>
using namespace std;
int single(vector<int> &arr)
{
    int n = arr.size();
    int low = 1;
    int high = arr.size() - 2;
    if (n == 1)
        return arr[0];
    if (arr[0] != arr[1])
        return arr[0];
    if (arr[n - 1] != arr[n - 2])
        return arr[n - 1];
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if ((arr[mid] != arr[mid + 1]) && (arr[mid] != arr[mid - 1]))
        {
            return arr[mid];
        }
        else if ((mid % 2 == 1 && arr[mid] == arr[mid - 1]) || (mid % 2 == 0 && arr[mid] == arr[mid + 1]))
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1; // fallback if no single element is found
}

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " sorted elements: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int result = single(arr);
    if (result != -1)
    {
        cout << "Single element in array: " << result << "\n";
    }
    else
    {
        cout << "No single element found\n";
    }
    return 0;
}