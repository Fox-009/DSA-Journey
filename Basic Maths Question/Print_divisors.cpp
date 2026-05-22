// every thing should be sorted at the last.
#include <bits/stdc++.h>
using namespace std;
void divisior(int n)
{
    vector<int> ls; // here if we use set it will increase the time complexity instead we use vector +sort ;
    // The time complexity will be O(sqrt(n)).
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            ls.push_back(i);
            if (n / i != i)
            {
                ls.push_back(n / i);
            }
        }
    }
    // TC = O(n log(n)) here n = no of factorial.
    sort(ls.begin(), ls.end());
    // the Tc = O(no. of factorial).
    for (auto it : ls)
    {
        cout << it << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    divisior(n);
    return 0;
}