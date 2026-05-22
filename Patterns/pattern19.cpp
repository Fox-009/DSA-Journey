#include <bits/stdc++.h>
using namespace std;
void print19(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n - i - 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < 2 * i; j++)
        {
            cout << " ";
        }

        for (int j = 0; j <= n - i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    int inspac = 2 * (n - 1);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < inspac; j++)
        {
            cout << " ";
        }
        inspac -= 2;
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
    print19(n);
    return 0;
}