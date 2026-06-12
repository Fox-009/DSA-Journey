#include <bits/stdc++.h>
using namespace std;
bool rotateStringConcat(string s, string t)
{
    int n = s.size();
    if (s.size() != t.size())
        return false;
    if (s == t)
        return true;
    while (n >= 0)
    {
        char ch = s.back();
        s.pop_back();
        s = ch + s;
        if (s == t)
            return true;
        n--;
    }
    return false;
}
int main()
{
    string s, goal;

    cout << "Enter original string: ";
    cin >> s;

    cout << "Enter goal string: ";
    cin >> goal;

    // Using concatenation method (best)
    if (rotateStringConcat(s, goal))
    {
        cout << "The string can be rotated to match the goal!" << endl;
    }
    else
    {
        cout << "The string cannot be rotated to match the goal." << endl;
    }

    return 0;
}