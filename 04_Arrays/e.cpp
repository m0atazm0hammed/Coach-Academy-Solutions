#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int mn_i = 0, mx_i = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        if (a[i] <= a[mn_i])
            mn_i = i;

        if (a[i] > a[mx_i])
            mx_i = i;
    }
    int ans = mx_i + (n - 1 - mn_i);
    if (mn_i < mx_i)
        ans--;
    cout << ans << '\n';
    return 0;
}