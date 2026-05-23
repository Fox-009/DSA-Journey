// Print/store elements in reverse order.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n; // number of elements to read

    vector<int> v(n); // allocate vector of size n

    for (int i = 0; i < n; i++)
    {
        cin >> v[i]; // read each element into the vector
    }
    reverse(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " "; // print element
    }
}