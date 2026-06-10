#include <bits/stdc++.h>
using namespace std;

// Same as Koko Eating Bananas
// Problem: Find smallest divisor such that sum of ceil(nums[i]/divisor) <= threshold

long long time(vector<int> &piles, int hourly)
{
    long long total = 0;
    for (int it : piles)
    {
        total += (it + hourly - 1LL) / hourly;
    }
    return total;
}

int koko(vector<int> &piles, int hours)
{
    int low = 1;
    int high = *max_element(piles.begin(), piles.end());
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int val = time(piles, mid);
        if (val <= hours)
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
    int hours;
    cin >> hours;
    vector<int> piles;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        piles.push_back(x);
    }
    int result = koko(piles, hours);
    cout << "The answer is: " << result << '\n';
}
