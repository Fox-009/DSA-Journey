// The number of element should be more than N/2;

#include <bits/stdc++.h>
using namespace std;
// brute : TC = O(N^2)  and SC = O(1);
// int major(vector<int> &arr, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         int count = 0;
//         for (int j = 0; j < n; i++)
//         {
//             if (arr[j] == arr[i])
//                 count++;
//         }
//         if (count > n / 2)
//         {
//             return arr[i];
//         }
//     }
// }

// Better Version : Using hashing  TC = O(n log n)+ O(n) and SC = O(N);

// int major(vector<int> &arr, int n)
// {
//     map<int, int> mpp;
//     for (int i = 0; i < n; i++)
//     {
//         mpp[arr[i]]++;
//     }
//     for (auto it : mpp)
//     {
//         if (it.second > n / 2)
//             return it.first;
//     }
//     return -1;
// }

// Optimal : Moore's Voting Algorithem;
int major(vector<int> &arr, int n)
{
    int cnt = 0;
    int el;
    for (int i = 0; i < n; i++)
    {
        if (cnt == 0)
        {
            cnt = 1;
            el = arr[i];
        }
        else if (arr[i] == el)
            cnt++;
        else
            cnt--;
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == el)
            count++;
    }
    if (count > n / 2)
        return el;
    return -1;
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> arr;
    cout << "Enter the element: ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    int result = major(arr, n);
    cout << result;
}