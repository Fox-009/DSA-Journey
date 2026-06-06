#include <bits/stdc++.h>
using namespace std;

// Brute force methord;

// bool ls(vector<int>&arr, int x){
//     for(int i = 0;i<arr.size();i++){
//         if (arr[i] == x){
//             return true;
//         }
//     }
//     return false;
// }

// int longe(vector<int>&arr, int n){
//     int count = 0;
//     int longest = 1;
//     int x;
//     for(int i = 0; i<n;i++){
//         x  = arr[i];
//         count = 1;
//         while (ls(arr,x)){
//             x+= 1;
//             count++;
//         }
//         longest = max(longest,count);
//     }
//     return longest;
// }

// Better Version;
// int longe(vector<int>&arr){
//     int n = arr.size();
//     if(n == 0) return 0;
//     int count = 0;
//     int longest = 1;
//     int last_smallest = INT_MIN;
//     sort(arr.begin(),arr.end());
//     for(int i = 0; i<n ; i++){
//         if(arr[i]-1 == last_smallest){
//             count++;
//             last_smallest = arr[i];
//         }
//         else{
//             count = 1;
//             last_smallest = arr[i];
//         }
//         longest = max(count,longest);
//     }
//     return longest;
// }

// Optimal version: For this we will use unordered set;
int longest(vector<int> &arr)
{
    if (arr.size() == 0)
        return 0;
    int longest = 0;
    int count = 0;
    int x;
    unordered_set<int> n;
    for (int i = 0; i < arr.size(); i++)
    {
        n.insert(arr[i]);
    }
    for (auto it : n)
    {
        if (n.find(it - 1) == n.end())
        {
            count = 1;
            x = it;
            while (n.find(x + 1) != n.end())
            {
                count++;
                x++;
            }
        }
        longest = max(longest, count);
    }
    return longest;
}

int main()
{
    vector<int> arr;
    int n;
    cout << "Enter the no. of element :";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    int result = longest(arr);
    cout << result;
    return 0;
}