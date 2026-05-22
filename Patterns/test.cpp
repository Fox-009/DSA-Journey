#include <bits/stdc++.h>
using namespace std;
void print(int n)
{
    for (int i = 0; i < n; i++)
    {
        // for (int j = 0; j <= n - i - 1; j++)
        // {
        //     cout << "*";
        // }
        // for (int j = 0; j < 2 * i; j++)
        // {
        //     cout << " ";
        // }
        // for (int j = 0; j <= n - i - 1; j++)
        // {
        //     cout << "*";
        // }
        // cout << endl;
        int k = 2 * (n);
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j <= k; j++)
        {
            cout << " ";
            k -= 2;
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    print(n);
    return 0;
}