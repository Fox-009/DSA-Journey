#include <bits/stdc++.h>
using namespace std;
void print(int n)
{
    for (int i = 0; i < 2 * n - 1; i++)
    {
        int star = i;
        int space = 2 * (n - 1);
        if (i < n)
        {
            star = 2 * n - i;
        }
        for (int j = 0; j <= star; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < space; j++)
        {
            cout << " ";
            if (i < n)
            {
                space -= 2;
            }
            else
            {
                space += 2;
            }
        }
        for (int j = 0; j <= star; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    print(n);
    return 0;
}