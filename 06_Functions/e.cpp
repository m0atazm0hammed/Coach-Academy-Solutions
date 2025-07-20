#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
bool valid(string s, string t) {
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] != t[t.size() - i - 1]) return false;
    }
    return true;
}

int main() {
    string s, t;
    cin >> s >> t;
    cout << (valid(s, t) ? "YES" : "NO");
    return 0;
}
