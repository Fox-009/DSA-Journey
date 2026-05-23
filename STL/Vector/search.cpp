#include <bits/stdc++.h>
using namespace std;

void search(vector<int> &v, int n)
{
    bool found = false;

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == n)
        {
            cout << "Found at Index: " << i << endl;
            found = true;
        }
    }

    if (found == false)
        cout << "Not Found";
}

int main()
{
    int n;
    cin >> n;
    int f;
    cin >> f;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    search(v, f);
}