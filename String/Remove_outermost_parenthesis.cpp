#include <bits/stdc++.h>
using namespace std;

string removeOuterParentheses(string s)
{
    int cnt = 0;
    string ans = "";

    for (char ch : s)
    {
        if (ch == '(')
        {
            if (cnt > 0)
            {
                ans += ch;
            }
            cnt++;
        }
        else
        { // ch == ')'
            cnt--;
            if (cnt > 0)
            {
                ans += ch;
            }
        }
    }

    return ans;
}

int main()
{
    string s;
    cout << "Enter string: ";
    cin >> s;

    string result = removeOuterParentheses(s);

    cout << "After removing outermost parentheses: " << result << endl;

    return 0;
}