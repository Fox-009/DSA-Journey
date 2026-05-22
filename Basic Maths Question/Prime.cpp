// A number which has exactly two factor 1 and itself;
#include <bits/stdc++.h>
using namespace std;
void prime(int n)
{
    // The time complexity will be O(sqrt(n)).
    int count = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
            if (n / i != i)
            {
                count++;
            }
        }
    }
    if (count == 2)
    {
        cout << "Prime";
    }
    else
    {
        cout << "Not Prime";
    }
}
int main()
{
    int n;
    cin >> n;
    prime(n);
    return 0;
}