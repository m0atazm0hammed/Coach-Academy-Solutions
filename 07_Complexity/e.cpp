#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long l, r;
        cin >> l >> r;
        if (l > r)
            swap(l, r);
        long long ans = (r - l + 1) * (l + r) / 2; // sum of arithmetic sequence = (n) * (a1 + an) / 2
                                                   // where n is number of terms, a1 is first term and an is the last term
        cout << ans << '\n';
    }
    return 0;
}