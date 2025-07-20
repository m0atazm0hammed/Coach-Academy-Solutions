#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll digits(string &s) {
    ll sum = 0;
    for (int i = 0; i < s.size(); ++i) {
        sum += (s[i] - '0');
    }
    return sum;
}

int main() {

    ll n,m;
    cin>>n;
    ll s1 = 0, s2 = 0;

    for (int i = 0; i < n; ++i) {
        string s;
        cin>>s;
        s1 += digits(s);
    }

    cin>>m;
    for (int i = 0; i < m; ++i) {
        string s;
        cin>>s;
        s2 += digits(s);
    }

    if (s1 > s2) {
        cout<<"Team A";
    } else if (s1 < s2) {
        cout<<"Team B";
    } else {
        cout<<"Tie";
    }
    return 0;

}
