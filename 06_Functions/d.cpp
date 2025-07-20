#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
bool is_max(int x, int mx) {
    return x > mx;
}
bool is_min(int x, int mn) {
    return x < mn;
}

int main() {
    int n;
    cin >> n;
    int mx = INT_MIN, mn = INT_MAX, ans = 0;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if (i == 0) {
            mx = x;
            mn = x;
        } else {
            if (is_max(x, mx)) {
                mx = x;
                ans++;
            } else if (is_min(x, mn)) {
                mn = x;
                ans++;
            }
        }
    }
    cout << ans;
    return 0;
}
