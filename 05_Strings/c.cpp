#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    bool foundDigit = false;
    for (int i = 0; i < n; ++i)
    {
        if ('0' <= s[i] && s[i] <= '9')
        {
            foundDigit = true;
            break;
        }
    }
    cout << (n >= 8 && foundDigit ? "Valid" : "Invalid");
    return 0;
}