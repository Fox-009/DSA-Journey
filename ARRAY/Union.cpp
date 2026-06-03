#include <bits/stdc++.h>
using namespace std;
vector<int> answer(vector<int> &arr1, vector<int> &arr2, int n, int m)
{
    int i = 0;
    int j = 0;
    vector<int> unionarr;
    while (i < n && j < m)
    {
        if (arr1[i] <= arr2[j])
        {
            if (unionarr.size() == 0 || unionarr.back() != arr1[i])
            {
                unionarr.push_back(arr1[i]);
            }
            i++;
        }
        else
        {
            if (unionarr.size() == 0 || unionarr.back() != arr2[j])
            {
                unionarr.push_back(arr2[j]);
            }
            j++;
        }
    }
    while (i < n)
    {
        if (unionarr.size() == 0 || unionarr.back() != arr1[i])
        {
            unionarr.push_back(arr1[i]);
        }
        i++;
    }
    while (j < m)
    {
        if (unionarr.size() == 0 || unionarr.back() != arr2[j])
        {
            unionarr.push_back(arr2[j]);
        }
        j++;
    }
    return unionarr;
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