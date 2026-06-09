#include <bits/stdc++.h>
using namespace std;

long long power(long long mid, int n)
{
    long long ans = 1;

    while (n > 0)
    {
        if (n % 2 == 1)
            ans *= mid;

        mid *= mid;
        n /= 2;
    }

    return ans;
}

int nthRoot(int x, int n)
{
    int low = 1;
    int high = x;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        long long val = power(mid, n);

        if (val == x)
            return mid;
        else if (val < x)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}

int main()
{
    int x;
    cin >> x;
    int k;
    cin >> k;
    int result = nthRoot(x, k);
    cout << result << '\n';
    return 0;
}