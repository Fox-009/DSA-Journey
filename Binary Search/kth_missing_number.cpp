#include <bits/stdc++.h>
using namespace std;
// Brute force;
// int findKthPositive(vector<int>&arr,int k){
//     for(int i = 0;i<arr.size();i++){
//         if(arr[i]<=k){
//             k++;
//          }
//     }
//     return k;
// }

// Optimal:
int findKthPositive(vector<int> &arr, int k)
{
    int low = 0;
    int high = arr.size() - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int missing = arr[mid] - mid - 1;
        if (missing >= k)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return low + k;
}

int main()
{
    vector<int> arr = {2, 3, 4, 7, 11};
    int k = 5;
    cout << findKthPositive(arr, k) << endl;
    return 0;
}