#include <bits/stdc++.h>
using namespace std;
bool isAnagram(string s, string t)
{
    vector<int> v1;
    vector<int> v2;
    if (s.size() != t.size())
        return false;
    for (int i = 0; i < s.size(); i++)
    {
        v1[s[i]]++;
        v2[t[i]]++;
    }
    return v1 == v2;
}
int main()
{
    string s, t;

    cout << "Enter first string: ";
    cin >> s;

    cout << "Enter second string: ";
    cin >> t;

    if (isAnagram(s, t))
    {
        cout << "The strings are anagrams!" << endl;
    }
    else
    {
        cout << "The strings are NOT anagrams." << endl;
    }

    return 0;
}