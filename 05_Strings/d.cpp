#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin >> s;

    int n = s.size();
    for (int i = 0; i < n; ++i)
    {
        if (i % 2 != 0)
        {
            s[i] = toupper(s[i]);
        }
        else
        {
            s[i] = tolower(s[i]);
        }
    }

    cout << s;
    return 0;
}