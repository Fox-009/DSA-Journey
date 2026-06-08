#include <bits/stdc++.h>
using namespace std;

int findMin(vector<int> &nums)
{
    int low = 0;
    int high = nums.size() - 1;
    int ans = INT_MAX;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[low] == nums[mid])
        {
            ans = min(ans, nums[low]);
            low++;
            continue;
        }
        if (nums[high] == nums[mid])
        {
            ans = min(ans, nums[mid]);
            high--;
            continue;
        }
        if (nums[mid] >= nums[low])
        {
            ans = min(ans, nums[low]);
            low = mid + 1;
        }
        else
        {
            ans = min(ans, nums[mid]);
            high = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " rotated sorted elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int result = findMin(nums);
    cout << "Minimum element in rotated sorted array: " << result << "\n";
    return 0;
}