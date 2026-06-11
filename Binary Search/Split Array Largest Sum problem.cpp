#include <bits/stdc++.h>
using namespace std;

// This EXACT pattern solves:
// Split Array, Book Allocation, Painter's Partition, Ship Capacity,
// Koko Bananas, Bouquets, Smallest Divisor

bool isPossible(vector<int> &nums, long long maxSum, int k)
{
    int subarrays = 1; // Start with first subarray
    long long currentSum = 0;

    for (int num : nums)
    {
        // If adding this number exceeds maxSum, start a new subarray
        if (currentSum + num > maxSum)
        {
            subarrays++;       // Create new subarray
            if (subarrays > k) // Need more subarrays than allowed
                return false;
            currentSum = num; // Start new subarray with current number
        }
        else
        {
            currentSum += num; // Add to current subarray
        }
    }

    return true;
}

int splitArray(vector<int> &nums, int k)
{
    // Lower bound: largest single element (subarray must at least hold the biggest number)
    long long low = *max_element(nums.begin(), nums.end());

    // Upper bound: sum of all elements (one subarray holding everything)
    long long high = accumulate(nums.begin(), nums.end(), 0LL);

    long long answer = high;

    while (low <= high)
    {
        long long mid = low + (high - low) / 2; // Candidate max sum

        if (isPossible(nums, mid, k))
        {
            // Feasible: try for smaller max sum
            answer = mid;
            high = mid - 1;
        }
        else
        {
            // Not feasible: need larger max sum
            low = mid + 1;
        }
    }

    return (int)answer;
}
/**
 * Driver code with multiple test cases
 */
int main()
{
    // Test Case 1
    vector<int> nums1 = {7, 2, 5, 10, 8};
    int k1 = 2;
    cout << "Test 1: " << splitArray(nums1, k1) << endl; // Expected: 18

    // Test Case 2
    vector<int> nums2 = {1, 2, 3, 4, 5};
    int k2 = 2;
    cout << "Test 2: " << splitArray(nums2, k2) << endl; // Expected: 9 (1+2+3=6, 4+5=9 → max=9)

    // Test Case 3
    vector<int> nums3 = {10, 20, 30, 40};
    int k3 = 2;
    cout << "Test 3: " << splitArray(nums3, k3) << endl; // Expected: 70 (10+20+30=60, 40=40 → max=60? Actually (10+20=30, 30+40=70 → max=70))

    // Test Case 4
    vector<int> nums4 = {1, 4, 4};
    int k4 = 3;
    cout << "Test 4: " << splitArray(nums4, k4) << endl; // Expected: 4 (each element separate, max = 4)

    // Test Case 5 (Custom input)
    int n, k;
    cout << "\nEnter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    cout << "Enter number of subarrays (k): ";
    cin >> k;

    int result = splitArray(nums, k);
    cout << "Minimum possible largest sum: " << result << endl;

    return 0;
}