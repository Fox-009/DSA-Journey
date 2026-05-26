#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of element: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements: \n";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max = *max_element(arr, arr + n);
    int hash[max + 1] = {0};

    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }

    int low = n;
    int high = 0;

    int lk = -1;
    int hk = -1;

    for (int i = 0; i <= max; i++)
    {
        if (hash[i] > 0)
        {
            if (low > hash[i])
            {
                low = hash[i];
                lk = i;
            }
            if (high < hash[i])
            {
                high = hash[i];
                hk = i;
            }
        }
    }

    cout << "Element: " << lk << " with lowest frequency of: " << low << endl;
    cout << "Element: " << hk << " with highest frequency of: " << high;

    return 0;
}