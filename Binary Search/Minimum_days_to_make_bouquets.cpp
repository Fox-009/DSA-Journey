#include <bits/stdc++.h>
using namespace std;
// brute force:
bool possible(vector<int> &days, int k, int m, int in)
{
    {
        int cnt = 0;
        int ans = 0;
        int n = days.size();
        for (int i = 0; i < n; i++)
        {
            if (days[i] <= in)
            {
                cnt++;
            }
            else
            {
                ans += (cnt / k);
                cnt = 0;
            }
        }
        ans += cnt / k;
        if (ans >= m)
            return true;
        else
            return false;
    }
}

// int blooming(vector<int> &days, int k, int m)
// {
//     if (1LL * m * k > days.size())
//         return -1;
//     int low = *min_element(days.begin(), days.end());
//     int high = *max_element(days.begin(), days.end());
//     for (int i = low; i <= high; i++)
//     {
//         if (possible(days, k, m, i))
//         {
//             return i;
//         }
//     }
//     return -1;
// }

// optimal
int blooming(vector<int> &days, int k, int m)
{
    if (1LL * m * k > days.size())
        return -1;
    int low = *min_element(days.begin(), days.end());
    int high = *max_element(days.begin(), days.end());
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (possible(days, k, m, mid))
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return low;
}
int main()
{
    int k; // no. of bouquets
    int m; // no. of flowers per bouwuets
    vector<int> days;
    int n;
    cin >> k >> m >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        days.push_back(x);
    }
    cout << blooming(days, k, m);
}