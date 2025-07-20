#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long have = 1, cnt = 0;
    while (have < n)
    {
        have *= 2;
        cnt++;
    }
    cout << cnt;
    return 0;
}