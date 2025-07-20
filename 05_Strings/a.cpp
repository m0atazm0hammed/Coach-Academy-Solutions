#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 50;
string arr[N];
int main()
{
    int sz = 0;
    string s;
    while (cin >> s)
    {
        arr[sz] = s;
        sz++;
    }

    reverse(arr, arr + sz);
    for (int i = 0; i < sz; ++i)
    {
        cout << arr[i] << ' ';
    }
    return 0;
}