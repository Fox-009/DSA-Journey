// reverse using recursion
#include <bits/stdc++.h>
using namespace std;

// Pass i as parameter so it persists through recursion
void rev(vector<int> &v, int i)
{
    int n = v.size();

    // Base case: when i reaches middle
    if (i >= n - 1 - i)
    {
        return;
    }

    // Swap current pair
    swap(v[i], v[n - 1 - i]);

    // Recursive call with next index
    rev(v, i + 1);
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

    rev(v, 0); // Start with i = 0

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}