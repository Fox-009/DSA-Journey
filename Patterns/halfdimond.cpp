#include <bits/stdc++.h>
using namespace std;
void HD(int n)
{
    for (int i = 1; i < (2 * n); i++)
    {
        int star = i;
        if (i > n)
        {
            star = 2 * n - i;
        }
        for (int j = 0; j < star; j++)
        {
            cout << " *";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    HD(n);
    return 0;
}