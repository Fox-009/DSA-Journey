#include <bits/stdc++.h>
using namespace std;
void right(vector<int> &array, int n, int rotation) // there is better version by using stl function reverse!!
{
    if (n == 0)
        return;

    rotation %= n;

    vector<int> temp(rotation);

    // Save last k elements
    for (int i = 0; i < rotation; i++)
    {
        temp[i] = array[n - rotation + i];
    }

    // Shift remaining elements right
    for (int i = n - rotation - 1; i >= 0; i--)
    {
        array[i + rotation] = array[i];
    }

    // Put saved elements at front
    for (int i = 0; i < rotation; i++)
    {
        array[i] = temp[i];
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> array;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        array.push_back(x);
    }
    int rotation;
    cout << "Enter the no. of rotation: ";
    cin >> rotation;
    right(array, n, rotation);
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}