#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of element: ";
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    cout << "Sorted vector in assending order: ";
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    sort(v.begin(), v.end(), greater<int>());
    cout << "Sorted vector in decending order: ";
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}