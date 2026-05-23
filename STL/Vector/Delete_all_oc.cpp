// Delete duplicates (keep order)
#include <bits/stdc++.h>
using namespace std;
void del(vector<int> &v, int s)
{
    v.erase(remove(v.begin(), v.end(), s), v.end());
}
int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter the elements: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int s;
    cout << "Enter the element that you want to delete: ";
    cin >> s;
    del(v, s);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}
