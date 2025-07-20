#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    sort(a, a + n);
    long long sum = 0;
    int ans = 0;
    for (int i = 0; i < n; ++i)
    {
        if (sum + a[i] <= k)
        {
            ans++;
            sum += a[i];
        }
        else
        {
            break;
        }
    }
    cout << ans << '\n';
    return 0;
}