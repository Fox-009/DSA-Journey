#include <bits/stdc++.h>
using namespace std;

bool search(vector<int> &nums, int target)
{

    int start = 0;
    int end = nums.size() - 1;

    while (start <= end)
    {

        int mid = start + (end - start) / 2;

        if (nums[mid] == target)
            return true;

        if (nums[start] == nums[mid] && nums[mid] == nums[end])
        {
            start++;
            end--;
            continue;
        }

        if (nums[start] <= nums[mid])
        {
            if (target >= nums[start] && target < nums[mid])
                end = mid - 1;
            else
                start = mid + 1;
        }

        else
        {
            if (target > nums[mid] && target <= nums[end])
                start = mid + 1;
            else
                end = mid - 1;
        }
    }
    return false;
}

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " rotated array elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int target;
    cout << "Enter target to search: ";
    cin >> target;

    bool found = search(nums, target);
    if (found)
    {
        cout << "Target found\n";
    }
    else
    {
        cout << "Target not found\n";
    }

    return 0;
}