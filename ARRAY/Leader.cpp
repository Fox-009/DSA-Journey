#include <bits/stdc++.h>
using namespace std;
// Brute force approch: TC = O(n^2) and SC = O(N)

// vector<int>answer(vector<int>arr){
//     bool leader;
//     vector<int>ans;
//     for(int i = 0; i< arr.size(); i++){
//         leader = true;
//         for(int j = i+1;j<arr.size();j++){
//             if (arr[j]>arr[i]){
//                 leader = false;
//             }
//         }
//         if(leader == true){
//             ans.push_back(arr[i]);
//         }
//     }
//     return ans;
// }

// Optimal version:
vector<int> answer(vector<int> arr)
{
    int n = arr.size();

    int maxi = arr[n - 1];
    vector<int> ans;

    ans.push_back(maxi);

    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] > maxi)
        {
            maxi = arr[i];
            ans.push_back(maxi);
        }
    }

    reverse(ans.begin(), ans.end());
    return ans;
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
}