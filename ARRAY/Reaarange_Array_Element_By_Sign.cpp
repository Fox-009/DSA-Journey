#include <bits/stdc++.h>
using namespace std;

// Brute Force- TC = O(N + N/2) and SC = O(N);
// void reaarange(vector<int> &arr, int n)
// {
//     vector<int> Pos;
//     vector<int> Neg;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] >= 0)
//         {
//             Pos.push_back(arr[i]);
//         }
//         else
//             Neg.push_back(arr[i]);
//     }

//     for (int i = 0; i < n / 2; i++)
//     {
//         arr[2 * i] = Pos[i];
//         arr[(2 * i) + 1] = Neg[i];
//     }
// }

// Optimal Type 1 problem: When equal no. of of positive and negetive element: TC = O(N)  and SC = O(N);
vector<int> rearrange(vector<int> &arr, int n)
{
    vector<int> Ans(n);
    int Posindex = 0;
    int NegIndex = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            Ans[Posindex] = arr[i];
            Posindex += 2;
        }
        else
        {
            Ans[NegIndex] = arr[i];
            NegIndex += 2;
        }
    }
    return Ans;
}

// type 2 Question where no. of positive element != no. of negetive element or visaversa ;
// void reaarange2(vector<int> &arr, int n)
// {
//     vector<int> Pos;
//     vector<int> Neg;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] >= 0)
//         {
//             Pos.push_back(arr[i]);
//         }
//         else
//             Neg.push_back(arr[i]);
//     }
//     int mn = min(Pos.size(), Neg.size());
//     for (int i = 0; i < mn; i++)
//     {
//         arr[2 * i] = Pos[i];
//         arr[(2 * i) + 1] = Neg[i];
//     }
//     if (Pos.size() > Neg.size())
//     {
//         int idx = Neg.size() * 2;
//         for (int i = mn; i < Pos.size(); i++)
//         {
//             arr[idx] = Pos[i];
//             idx++;
//         }
//     }
//     else
//     {
//         mn = min(Pos.size(), Neg.size());
//         int idx = Pos.size() * 2;
//         for (int i = mn; i < Neg.size(); i++)
//         {
//             arr[idx] = Neg[i];
//             idx++;
//         }
//     }
// }
int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> arr;
    cout << "Enter the element: ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    vector<int> result = rearrange(arr, n);

    cout << "Rearranged array: ";
    for (int i = 0; i < n; i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}