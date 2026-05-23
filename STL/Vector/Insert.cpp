// Insert new element at index.
#include <bits/stdc++.h>
using namespace std;
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

    int place;
    cout << "Enter the place you want the digit: ";
    cin >> place;

    int value;
    cout << "Enter the value: ";
    cin >> value;

    v.insert((v.begin() + place - 1), value);
    int l = v.size();
    for (int i = 0; i < l; i++)
    {
        cout << v[i] << " ";
    }
}