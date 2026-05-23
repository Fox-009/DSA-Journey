// Program to read n integers into a vector and print the maximum and minimum.
// Input: first an integer `n`, then `n` integers follow.

#include <bits/stdc++.h>
using namespace std;

void findMinMax(vector<int> &v)
{
    int minVal = v[0];
    int maxVal = v[0];
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] < minVal)
            minVal = v[i];
        if (v[i] > maxVal)
            maxVal = v[i];
    }
    cout << "The minimum value: " << minVal << endl;
    cout << "The maximum value: " << maxVal << endl;
}

int main()
{
    int n;
    cin >> n; // number of elements to read

    vector<int> v(n); // allocate vector of size n

    for (int i = 0; i < n; i++)
    {
        cin >> v[i]; // read each element into the vector
    }

    findMinMax(v);

    return 0;
}