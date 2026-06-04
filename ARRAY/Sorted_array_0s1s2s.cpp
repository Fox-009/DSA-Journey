// Brute force methor use merge ssort but the TC = O(n long n) and SC = O(N);
// better version
#include <bits/stdc++.h>
using namespace std;

// better version

// void sorted(vector<int> &arr, int n)
// {
//     int count0 = 0;
//     int count1 = 0;
//     int count2 = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == 0)
//             count0++;
//         else if (arr[i] == 1)
//             count1++;
//         else
//             count2++;
//     }
//     for (int i = 0; i < count0; i++)
//     {
//         arr[i] = 0;
//     }
//     for (int i = count0; i < count0 + count1; i++)
//     {
//         arr[i] = 1;
//     }
//     for (int i = count0 + count1; i < n; i++)
//     {
//         arr[i] = 2;
//     }
// }

// Optimal One
// Dutch national Flag alogorith:
void sorted(vector<int> &arr, int n)
{
    int low = 0;
    int mid = 0;
    int high = n - 1;
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[mid], arr[low]);
            mid++;
            low++;
        }
        else if (arr[mid] == 1)
            mid++;
        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}
int main()
{
    int n;
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
    sorted(arr, n);
    cout << "Sorted form: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}