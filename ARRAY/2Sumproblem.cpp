#include <bits/stdc++.h>
using namespace std;

void read(int n, vector<int> &arr, int target)
{
    map<int, int> mpp;
    int find = 0;
    for (int i = 0; i < n; i++)
    {
        int a = arr[i];
        int more = target - a;
        if (mpp.find(more) != mpp.end())
        {
            cout << "Yes";
            cout << mpp[more] << "," << i;
            find = 1;
        }
        mpp[a] = i;
    }
    if (find == 0)
        cout << "No";
}
int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> arr;
    cout << "Enter the element: ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    int target;
    cout << "Enter the target number: ";
    cin >> target;
}