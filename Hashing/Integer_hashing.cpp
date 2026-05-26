#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of element: ";
    cin >> n;

    int arr[n];
    int hash[13] = {0};

    cout << "Enter the elements: \n";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        hash[arr[i]]++;
    }

    int query;

    cout << "Enter the query: \n";
    cin >> query;

    while (query--)
    {
        int no;
        cout << "Enter the number: ";
        cin >> no;
        // fetching
        cout << hash[no] << endl;
    }
}