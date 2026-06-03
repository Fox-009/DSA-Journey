#include <bits/stdc++.h>
using namespace std;
vector<int> answer(vector<int> &arr1, vector<int> &arr2, int n, int m)
{
    int i = 0;
    int j = 0;
    vector<int> ans;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr2[j] < arr1[i])
        {
            j++;
        }
        else
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    return ans;
}
int main()
{
    int n, m;
    cout << "Enter the number of elements :";
    cin >> n >> m;
    vector<int> arr1;
    vector<int> arr2;
    cout << "Enter the elements for arr1: ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr1.push_back(x);
    }
    cout << "Enter the elements for arr2: ";
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        arr2.push_back(x);
    }
    vector<int> ans = answer(arr1, arr2, n, m);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}