#include <bits/stdc++.h>
using namespace std;
int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    if (n > 1)
    {
        return n * factorial(n - 1);
    }
    return 0;
}
int main()
{
    int n;
    cin >> n;
    int result = factorial(n);
    cout << result << " ";
    return 0;
}
