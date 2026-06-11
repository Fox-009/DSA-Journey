#include <bits/stdc++.h>
using namespace std;
bool Ispossible(vector<int> &nums, int pages, int students)
{
    int total = 0;
    int stud = 1;
    for (int it : nums)
    {
        if (total + it > pages)
        {
            stud++;
            if (stud > students)
                return false;
            total = it;
        }
        else
        {
            total += it;
        }
    }
    return true;
}
int Allocate(vector<int> &books, int students)
{
    int low = *max_element(books.begin(), books.end());
    int high = accumulate(books.begin(), books.end(), 0);
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (Ispossible(books, mid, students))
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return low;
}
int main()
{
    int n;
    cin >> n;
    vector<int> books;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        books.push_back(x);
    }
    int students = 2;

    cout << Allocate(books, students) << endl;

    return 0;
}