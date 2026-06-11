#include <bits/stdc++.h>
using namespace std;

bool check(vector<char> &s)
{
    int n = s.size();

    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] != s[n - i - 1])
            return false;
    }

    return true;
}

int main()
{
    string str;
    cin >> str;

    vector<char> s(str.begin(), str.end());

    if (check(s))
        cout << "Palindrome\n";
    else
        cout << "Not Palindrome\n";

    return 0;
}
