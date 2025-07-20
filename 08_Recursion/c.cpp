#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

char grid[60][60];
int R,C;

void rec(int r, int c) {
    if (r < 0 || r >= R || c < 0 || c >= C) {
        return;
    }
    if (grid[r][c] == '*' || grid[r][c] == '+') {
        return;
    }
    grid[r][c] = '+';
    rec(r+1, c);
    rec(r-1, c);
    rec(r, c+1);
    rec(r, c-1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> R >> C;
    for (int i = 0; i < R; ++i) {
        for (int j = 0; j < C; ++j) {
            cin>>grid[i][j];
        }
    }

    int x,y;
    cin>>x>>y;
    rec(x, y);

    for (int i = 0; i < R; ++i) {
        for (int j = 0; j < C; ++j) {
            cout<<grid[i][j];
        }
        cout<<'\n';
    }
    return 0;
}
