#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int idx = 0, n;
string arr[10000];

void rec(string s, int open, int close) {
    if (s.size() == n*2) {
        arr[idx] = s;
        idx++;
        return;
    }
    if (open < n) {
        rec(s + '(', open+1, close);
    }
    if (close < open) {
        rec(s+')', open, close+1);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n;
    rec("", 0, 0);

    for (int i = 0; i < idx; ++i) {
        cout<<arr[i]<<'\n';
    }
    return 0;
}
