#include <bits/stdc++.h>

using namespace std;
typedef long long ll;


int main() {

    int n;
    cin >> n;

    int arr[n+1][n+1];
    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j <= n; ++j) {
            cin >> arr[i][j];
        }
    }

    int path[n];
    for (int i = 0; i < n; ++i) {
        path[i] = i + 1;
    }

    ll mn = 1e9;

    do {
        ll cur = arr[0][path[0]];
        ll lst = path[0];

        for (int i = 1; i < n; ++i) {
            cur += arr[lst][path[i]];
            lst = path[i];
        }
        cur += arr[lst][0];
        mn = min(mn, cur);
    } while(next_permutation(path, path + n));

    cout << mn;
    return 0;
}
