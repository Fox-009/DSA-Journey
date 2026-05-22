#include <bits/stdc++.h>
using namespace std;
void APS(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            cout << "  ";
        }
        int brakpoint = ((2 * i + 1) / 2);
        char ch = 'A';
        for (int j = 0; j < (2 * i) + 1; j++)
        {
            cout << ch << " ";
            if (j < brakpoint)
            {
                ch++;
            }
            else
            {
                ch--;
            }
        }
        for (int j = 0; j < n - 1 - i; j++)
        {
            cout << "  ";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    APS(n);
    return 0;
}