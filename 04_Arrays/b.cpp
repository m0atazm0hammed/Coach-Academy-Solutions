#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    long long expectedSum = (n * (n + 1ll)) / 2ll;
    long long curSum = 0;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        curSum += x;
    }
    long long missed = expectedSum - curSum;
    cout << missed;
    return 0;
}