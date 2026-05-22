// duplicates of zero will be excluded in reverse
#include <bits/stdc++.h>
using namespace std;
void palindrome(int n)
{
    int d = n;
    int rev = 0;
    while (n > 0)
    {
        int last_digit = n % 10;
        n = n / 10;
        rev = (rev * 10) + last_digit;
    }
    if (rev == d)
    {
        cout << "True, Its palindrome";
    }
    else
    {
        cout << "False,It's not a palindrome";
    }
}
int main()
{
    int n;
    cin >> n;
    palindrome(n);
    return 0;
}
