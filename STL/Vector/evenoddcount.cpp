// Program to count how many even and odd integers are in a vector.
// Input: first integer `n`, then `n` integers.
// Output: prints the count of even and odd elements.

#include <bits/stdc++.h>
using namespace std;

void Oddandeven(vector<int> &v)
{
    int ecount = 0;
    int ocount = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] % 2 == 0)
        {
            ecount++;
        }
        if (v[i] % 2 != 0)
        {
            ocount++;
        }
    }
    cout << "The no. odd elements: " << ocount << endl;
    cout << "The no. even elements: " << ecount << endl;
}
int main()
{
    int n;
    cin >> n; // read number of elements

    vector<int> v(n); // allocate vector with n elements

    for (int i = 0; i < n; i++)
    {
        cin >> v[i]; // input each element
    }
    Oddandeven(v);
    return 0;
}