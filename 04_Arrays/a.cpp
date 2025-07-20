#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin >> s;

    int freq[26] = {0};
    for (int i = 0; i < s.size(); ++i)
    {
        int c = s[i] - 'a';
        freq[c]++;

        int shift = freq[c];
        int shiftedChar = (c + shift) % 26;
        char ch = shiftedChar + 'a';

        cout << ch;
    }

    return 0;
}