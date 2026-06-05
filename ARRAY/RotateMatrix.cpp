#include <bits/stdc++.h>
using namespace std;

// Brute force app:\\TC = O(N^2) and SC = O(N^2);

// vector<vector<int>> rotate(vector<vector<int>> arr, int n, int m)
// {
//     vector<vector<int>> ans(m, vector<int>(n));
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             ans[j][n - i - 1] = arr[i][j];
//         }
//     }
//     return ans;
// }

// Optimal
// Transpose: O(n²)
// Reverse rows: O(n²)
// Extra Space: O(1)

void rotate(vector<vector<int>> &arr, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        reverse(arr[i].begin(), arr[i].end());
    }
}

int main()
{
    int n, m;

    cout << "Enter the no. of row and col: ";
    cin >> n >> m;

    vector<vector<int>> arr(n, vector<int>(m));

    cout << "Enter the elements:\n";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    rotate(arr, n, m);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}