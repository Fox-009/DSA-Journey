#include <bits/stdc++.h>
using namespace std;
int pertiction(vector<int> &arr, int low, int high)
{
    int pivot = arr[low];
    int L = low;
    int R = high;
    while (L < R)
    {
        while (arr[L] <= pivot && L <= high - 1)
        {
            L++;
        }
        while (arr[R] > pivot && R >= low + 1)
        {
            R--;
        }
        if (L < R)
            swap(arr[L], arr[R]);
    }
    swap(arr[low], arr[R]);
    return R;
}

void qs(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int Pindex = pertiction(arr, low, high);
        qs(arr, low, Pindex - 1);
        qs(arr, Pindex + 1, high);
    }
}

int main()
{
    vector<int> arr;
    int n;
    cout << "Enter the number of element: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    qs(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}