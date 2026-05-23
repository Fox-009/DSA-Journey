#include <bits/stdc++.h>
using namespace std;
void delete_first_occurence(vector<int> &v, int s)
{
    bool found = false;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == s)
        {
            found = true;
            cout << "Found at index: " << i << endl;
            v.erase(v.begin() + i);
        }
    }
    if (found == false)
        cout << "Not Found";
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int s;
    cout << "Enter the element you want to delete: ";
    cin >> s;

    delete_first_occurence(v, s);
    cout << "New vector" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}