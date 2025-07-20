#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int arr[15], index = 0, player[15];
int n;
void rec(int is) {
    if (is >= n) {
        if (index == 0) {
            return;
        }
        for (int i = 0; i < index; ++i) {
            cout<<arr[i]<<' ';
        }
        cout<<'\n';
        return;
    }
    rec(is + 1);
    arr[index] = player[is];
    index++;
    rec(is + 1);
    index--;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        player[i - 1] = i;
    }
    rec(0);
}
