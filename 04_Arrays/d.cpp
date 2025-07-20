#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n], b[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i)
        {
            cin >> b[i];
        }
        while (k--)
        {
            int minA = 0, maxB = 0;
            for (int i = 0; i < n; ++i)
            {
                if (a[i] < a[minA])
                    minA = i;
                if (b[i] > b[maxB])
                    maxB = i;
            }
            if (a[minA] < b[maxB])
            {
                swap(a[minA], b[maxB]);
            }
        }
        int sum = 0;
        for (int i = 0; i < n; ++i)
        {
            sum += a[i];
        }
        cout << sum << '\n';
    }
    return 0;
}