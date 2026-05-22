#include <bits/stdc++.h>
using namespace std;
void gcd(int n, int m)
{
    int gcd = 0;
    for (int i = min(n, m); i >= 1; i--)
    {
        if (n % i == 0 && m % i == 0)
        {
            cout << i;
            break;
        }
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    gcd(n, m);
}