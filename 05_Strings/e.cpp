#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    string s;
    cin >> s;
    char mn[n];
    mn[n - 1] = s[n - 1];
    for (int i = n - 2; i >= 0; --i)
    {
        mn[i] = min(mn[i + 1], s[i]);
    }
    for (int i = 0; i < n; ++i)
    {
        if (mn[i] < s[i])
        {
            int pos = -1;
            for (int j = i; j < n; ++j)
            {
                if (s[j] == mn[i])
                {
                    pos = j;
                }
            }
            swap(s[i], s[pos]);
            break;
        }
    }
    cout << s << '\n';
    return 0;
}