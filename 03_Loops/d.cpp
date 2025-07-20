#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ll a, b;
    cin >> a >> b;
    int ans = 0;
	while(a <= b) {
		++ans;
		a *= 3;
		b *= 2;
	}
    cout << ans << endl;
    return 0;
}
