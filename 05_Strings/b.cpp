#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int freq[26] = {0};

    for (int j = 0; j < s.size(); ++j)
    {
        freq[s[j] - 'a']++;
    }

    for (int i = 0; i < s.size(); ++i)
    {
        if (freq[s[i] - 'a'] == 1)
        {
            cout << i;
            return 0;
        }
    }

    cout << -1;

    return 0;
}