#include <bits/stdc++.h>
using namespace std;
bool canplace(vector<int> &nums, long long maxmindistance, int ball)
{
    int cnt = 1;
    int last = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] - last >= maxmindistance)
        {
            cnt++;
            last = nums[i];
            if (cnt >= ball)
                return true;
        }
    }
    return false;
}
int maxDistance(vector<int> &nums, int m)
{
    sort(nums.begin(), nums.end());
    int low = 1;
    int high = nums.back() - nums.front();
    while (low <= high)
    {
        long long mid = low + (high - low) / 2;
        if (canplace(nums, mid, m))
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return high;
}
int main()
{
    int n, days;
    cin >> n >> days;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int result = maxDistance(arr, days);
    cout << result << endl;

    return 0;
}
