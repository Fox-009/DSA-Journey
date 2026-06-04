
#include <bits/stdc++.h>
using namespace std;
// Brute force:TC = O(N^3) and SC = O(1);

// int maximum(vector<int> &arr, int n)
// {
//     int maxi = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             int Sum = 0;
//             for (int k = i; k <= j; k++)
//             {
//                 Sum += arr[k];
//                 maxi = max(Sum, maxi);
//             }
//         }
//     }
//     return maxi;
// }

// Better Version  TC = O(N^2)  and  SC = O(1);
// int maximum(vector<int> &arr, int n)
// {
//     int maxi = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         int Sum = 0;
//         for (int j = i; j < n; j++)
//         {
//             Sum += arr[j];
//             maxi = max(Sum, maxi);
//         }
//     }
//     return maxi;
// }

// Optimal One: Kadane's Algorithem;
int maximum(vector<int> &arr, int n)
{
    int sum = 0;
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        mx = max(sum, mx);

        if (sum < 0)
        {
            sum = 0;
        }
    }
    return mx;
}

// To find array
// vector<int> ans(vector<int> &arr, int n)
// {
//     int sum = 0;
//     int mx = INT_MIN;
//     int start = 0;
//     int ansstart = 0;
//     int end = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (sum == 0)
//             start = i;

//         sum += arr[i];
//         if (sum > mx)
//         {
//             mx = sum;
//             ansstart = start;
//             end = i;
//         }

//         if (sum < 0)
//         {
//             sum = 0;
//         }
//     }
//     vector<int> ans;
//     for (int i = ansstart; i <= end; i++)
//     {
//         ans.push_back(arr[i]);
//     }
//     return ans;
// }
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
    int result = maximum(arr, n);
    cout << "Maximum subarray sum: " << result << endl;

    return 0;
}