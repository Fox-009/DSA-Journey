#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Create two pairs to store a serial number and a fruit name each.
    pair<int, string> p1;
    pair<int, string> p2;

    // Read the first pair from the user.
    cout << "Enter serial no: ";
    cin >> p1.first;

    cout << "Enter the fruit name: ";
    cin >> p1.second;

    // Read the second pair from the user.
    cout << "Enter next serial no: ";
    cin >> p2.first;

    cout << "Enter the fruit name: ";
    cin >> p2.second;

    // Swap the contents of p1 and p2.
    p1.swap(p2);

    // Print the swapped pair values.
    cout << p1.first << " " << p1.second;
    cout << p2.first << " " << p2.second;

    return 0;
}
