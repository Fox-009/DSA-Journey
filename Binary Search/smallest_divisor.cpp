#include <bits/stdc++.h>
using namespace std;

bool Ispossible(vector<int> &nums, int mid, int threshold)
{
    int cnt = 0;
    for (int it : nums)
    {
        cnt += (it + mid - 1) / mid;
        if (cnt > threshold)
            return false;
    }

    return true;
}
int smallestDivisor(vector<int> &nums, int threshold)
{
    int low = 1;
    int high = *max_element(nums.begin(), nums.end());
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (Ispossible(nums, mid, threshold))
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
    vector<int> nums = {1, 2, 5, 9};
    int threshold = 6;
    cout << smallestDivisor(nums, threshold) << endl;
    return 0;
}