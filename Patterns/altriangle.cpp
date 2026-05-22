#include <bits/stdc++.h>
using namespace std;
void RA(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + i; ch++)
        {
            char s = 'A' + i;
            cout << s << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    RA(n);
    return 0;
}
