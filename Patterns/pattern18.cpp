#include <bits/stdc++.h>
using namespace std;
void print18(int n)
{
    char ch = 'A' + n - 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            ch = ('A' + n - 1 - i + j);
            cout << ch << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    print18(n);
    return 0;
}