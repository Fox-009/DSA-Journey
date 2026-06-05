#include <bits/stdc++.h>
using namespace std;

vector<int> spiral(vector<vector<int>> mat, int n, int m)
{
    int top = 0, bottom = n - 1, right = m - 1, left = 0;
    vector<int> ans;
    while (top <= bottom && left <= right)
    {
        for (int i = left; i <= right; i++)
        {
            ans.push_back(mat[top][i]);
        }

        top++;

        for (int i = top; i <= bottom; i++)
        {
            ans.push_back(mat[i][right]);
        }

        right--;

        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                ans.push_back(mat[bottom][i]);
            }

            bottom--;
        }

        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                ans.push_back(mat[i][left]);
            }

            left++;
        }
    }
    return ans;
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
    vector<int> result = spiral(arr, n, m);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}