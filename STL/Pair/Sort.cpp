// Sort an array of pairs using a custom comparator.
#include <bits/stdc++.h>
using namespace std;

// Comparator function for pairs.
// Pairs are ordered first by the first element, then by the second element.
bool soort(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.first < p2.first)
        return true;
    if (p1.first > p2.first)
        return false;
    // If first elements are equal, compare second elements.
    if (p1.second < p2.second)
        return true;
    return false;
}

int main()
{
    // Initialize an array of pairs.
    pair<int, int> arr[] = {{1, 2}, {2, 1}, {1, 3}, {6, 9}, {8, 8}};
    int n = 5;

    // Sort the array using the custom comparator.
    sort(arr, arr + n, soort);

    // Print the sorted pairs.
    for (int i = 0; i < n; i++)
    {
        cout << "Sorted array: " << arr[i].first << "," << arr[i].second << "\n";
    }
}
