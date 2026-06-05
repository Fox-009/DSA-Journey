#include <bits/stdc++.h>
using namespace std;

// Brute Force Methor //

// int MarkRow(vector<vector<int>> &mat, int i)
// {
//     for (int j = 0; j < mat[0].size(); j++)
//     {
//         if (mat[i][j] != 0)
//         {
//             mat[i][j] = -1;
//         }
//     }
// }
// int MarkCol(vector<vector<int>> &mat, int j)
// {
//     for (int i = 0; i < mat.size(); i++)
//     {
//         if (mat[i][j] != 0)
//         {
//             mat[i][j] = -1;
//         }
//     }
// }
// void brute(vector<vector<int>> &mat)
// {
//     int n = mat.size();
//     int m = mat[0].size();
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (mat[i][j] == 0)
//             {
//                 MarkRow(mat, i);
//                 MarkCol(mat, j);
//             }
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (mat[i][j] == -1)
//             {
//                 mat[i][j] = 0;
//             }
//         }
//     }
// }

// Better Version //
// vector<vector<int>> zero(vector<vector<int>> arr, int n, int m)
// {
//     vector<int> row(n, 0);
//     vector<int> col(m, 0);

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (arr[i][j] == 0)
//             {
//                 row[i] = 1;
//                 col[j] = 1;
//             }
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (row[i] == 1 || col[j] == 1)
//             {
//                 arr[i][j] = 0;
//             }
//         }
//     }

//     return arr;
// }

// Optimal Solution:
vector<vector<int>> zero(vector<vector<int>> arr, int n, int m)
{
    int col0 = 1;
    // instead of row[i] -> arr[i][0]
    // instead of col[j] -> arr[0][j]
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 0)
            {
                arr[i][0] = 0;
                if (j != 0)
                {
                    arr[0][j] = 0;
                }
                else
                {
                    col0 = 0;
                }
            }
        }
        for (int i = 1; i < n; i++)
        {
            for (int j = 1; j < m; j++)
            {
                if (arr[i][j] != 0)
                {
                    if (arr[0][j] == 0 || arr[i][0] == 0)
                    {
                        arr[i][j] = 0;
                    }
                }
            }
        }
        if (arr[0][0] == 0)
        {
            for (int j = 0; j < m; j++)
            {
                arr[0][j] = 0;
            }
        }
        if (col0 == 0)
        {
            for (int i = 0; i < n; i++)
            {
                arr[i][0] = 0;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][0] == 0 || arr[0][j] == 0)
            {
                arr[i][j] = 0;
            }
        }
    }
    return arr;
}

int main()
{
    int n, m;
    cout << "Enter the no. of row and col: ";
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m));

    cout << "Enter the element: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            cin >> arr[i][j];
        }
    }
    vector<vector<int>> result = zero(arr, n, m);
}
