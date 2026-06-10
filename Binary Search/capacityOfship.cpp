#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> &arr, int capacity, int days)
{
    int current = 0;
    int daysNeeded = 1;

    for (int weight : arr)
    {
        if (current + weight > capacity)
        {
            daysNeeded++;
            current = weight;
            if (daysNeeded > days)
                return false;
        }
        else
        {
            current += weight;
        }
    }
    return true;
}

int minCapacity(vector<int> &arr, int days)
{
    // low = max element (largest single package)
    int low = *max_element(arr.begin(), arr.end());

    // high = total sum (all packages in one day)
    int high = accumulate(arr.begin(), arr.end(), 0);

    int ans = high;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (isPossible(arr, mid, days))
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
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

    int result = minCapacity(arr, days);
    cout << result << endl;

    return 0;
}
int mai()
{
    return 0;
}