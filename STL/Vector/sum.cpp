// Input and print vector.
// Find sum of all elements.

#include <bits/stdc++.h>
using namespace std;

int sum(vector<int> v)
{
    int sum = 0;
    for (auto i : v)
    {
        sum += i;
    }
    return sum;
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

    int result = sum(v);
    cout << "The sum of numbers will be: " << result;

    return 0;
}