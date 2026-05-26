#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout << "Enter the string: ";
    cin >> s;

    int hash[26] = {0};

    for (int i = 0; i < s.size(); i++)
    {

        hash[s[i] - 'a']++;
    }

    int query;

    cout << "Enter the query: \n";
    cin >> query;

    while (query--)
    {
        char ch;
        cout << "Enter the character: ";
        cin >> ch;
        // fetching
        cout << hash[ch - 'a'] << endl;
    }
}