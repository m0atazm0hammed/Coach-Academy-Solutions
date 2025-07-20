#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ll n, f;
    cin >> n >> f;
    ll sum = 0;
    for (ll i = f; i <= n; i += f) {
        sum += i;
    }
    cout << sum << endl;
    return 0;
}
