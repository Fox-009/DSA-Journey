#include <bits/stdc++.h>
using namespace std;
int count(int n)
{
    int count = 0;
    while (n > 0) // Or instead of this just use int count = (int)(log10(n)+1) you will get the count ..
    {
        count++;
        n = n / 10;
    }
    return count;
}
int main()
{
    int n;
    cin >> n;
    int result = count(n);
    cout << result;
    return 0;
}
