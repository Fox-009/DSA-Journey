#include <bits/stdc++.h>
using namespace std;
int reverse(int n)
{
    int rev = 0;
    while (n > 0)
    {
        int last_digit = n % 10;
        n = n / 10;
        rev = (rev * 10) + last_digit;
    }
    return rev;
}
int main()
{
    int n;
    cin >> n;
    int result = reverse(n);
    cout << result;
    return 0;
}
