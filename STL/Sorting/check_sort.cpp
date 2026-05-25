#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the no. of element: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter the elements: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> v2 = v;
    sort(v2.begin(), v2.end());
    if (v2 == v)
    {
        cout << "Sorted in ascending";
        return 0;
    }
    sort(v2.begin(), v2.end(), greater<int>());
    if (v2 == v)
        cout << "Sorted descending";
    else
        cout << "Not Sorted";
    return 0;
}

// for less time complexity

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     vector<int> v(n);

//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }

//     bool asc = true;
//     bool desc = true;

//     for (int i = 0; i < n - 1; i++)
//     {
//         if (v[i] > v[i + 1])
//             asc = false;

//         if (v[i] < v[i + 1])
//             desc = false;
//     }

//     if (asc)
//         cout << "Sorted Ascending";

//     else if (desc)
//         cout << "Sorted Descending";

//     else
//         cout << "Not Sorted";
// }