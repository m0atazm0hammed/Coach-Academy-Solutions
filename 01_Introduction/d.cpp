#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll x1, y1, vx1, vy1;
    ll x2, y2, vx2, vy2;
    ll t;

    cin >> x1 >> y1 >> vx1 >> vy1;
    cin >> x2 >> y2 >> vx2 >> vy2;
    cin >> t;

    vx1 = x1 + vx1 * t;
    vy1 = y1 + vy1 * t;

    vx2 = x2 + vx2 * t;
    vy2 = y2 + vy2 * t;

    cout << vx1 << ' ' << vy1 << endl;
    cout << vx2 << ' ' << vy2 << endl;
    return 0;
}
