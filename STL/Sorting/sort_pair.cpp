#include <bits/stdc++.h>
using namespace std;

// Custom comparator: sort by SECOND element (ascending)
bool sortBySecond(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
}

// Custom comparator: sort by SECOND element (descending)
bool sortBySecondDesc(pair<int, int> a, pair<int, int> b)
{
    return a.second > b.second;
}

int main()
{
    int n;
    cout << "Enter number of pairs: ";
    cin >> n;

    vector<pair<int, int>> v(n);

    for (int i = 0; i < n; i++)
    {
        cout << "Enter pair " << i + 1 << ": ";
        cin >> v[i].first >> v[i].second;
    }

    // 1. Default sort (by first, then second) asc
    sort(v.begin(), v.end());
    cout << "\nDefault (by first, then second):\n";
    for (auto &p : v)
        cout << p.first << " " << p.second << endl;

    // 2. Sort by SECOND element (ascending)
    sort(v.begin(), v.end(), sortBySecond);
    cout << "\nBy second element (ascending):\n";
    for (auto &p : v)
        cout << p.first << " " << p.second << endl;

    // 3. Sort by SECOND element (descending)
    sort(v.begin(), v.end(), sortBySecondDesc);
    cout << "\nBy second element (descending):\n";
    for (auto &p : v)
        cout << p.first << " " << p.second << endl;

    // 4. Sort descending by first, then second (using greater)
    sort(v.begin(), v.end(), greater<pair<int, int>>());
    cout << "\nDescending by first, then second:\n";
    for (auto &p : v)
        cout << p.first << " " << p.second << endl;

    return 0;
}