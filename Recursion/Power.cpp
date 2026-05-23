#include <bits/stdc++.h>
using namespace std;
int power(int num, int pwer)
{
    if (pwer == 0)
        return 1;
    if (pwer > 0)
    {
        return num * power(num, pwer - 1);
    }
}
int main()
{
    int n;
    int pwer;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Enter the power";
    cin >> pwer;
    int result = power(n, pwer);
    cout << result;
}