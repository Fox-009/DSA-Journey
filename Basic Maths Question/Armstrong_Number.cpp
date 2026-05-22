#include <bits/stdc++.h>
using namespace std;
void armstrong(int n)
{
    int arm = 0;
    int d = n;
    while (d > 0)
    {
        int last = d % 10;
        d = d / 10;
        arm = (last * last * last) + arm;
    }
    if (arm == n)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
}
int main()
{
    int n;
    cin >> n;
    armstrong(n);
    return 0;
}
