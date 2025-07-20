#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

long double dist(ll x1, ll y1, ll x2, ll y2) {
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

int main() {

    ll n;
    cin >> n;
    long double x[n], y[n];
    for (int i = 0; i < n; ++i) {
        ll a,b; cin >> a >> b;
        x[i] = a, y[i] = b;
    }
    long double mn = 1e9, ma = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i+1; j < n; ++j) {
            long double dis = dist(x[i], y[i], x[j], y[j]);
            mn = min(mn, dis);
            ma = max(ma, dis);
        }
    }

    cout << fixed << setprecision(6);
    cout << mn << " " << ma;


}
