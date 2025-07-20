#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int n;

void rec(int n, char src, char aux, char des) {
    if (n == 1) {
        cout << "Move disk 1 from " << src << " to " << des << "\n";
        return;
    }
    rec(n-1, src, des, aux);
    cout << "Move disk " << n << " from " << src << " to " << des << "\n";
    rec(n-1, aux, src, des);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    cin>>n;
    rec(n, 'A', 'B', 'C');

}
