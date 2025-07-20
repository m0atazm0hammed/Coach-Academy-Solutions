#include <bits/stdc++.h>
using namespace std;

int main()
{

    int r, c;
    cin >> r >> c;
    char arr[r][c];
    int fx = -1, fy = -1, sx = 0, sy = 0;
    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 'x')
            {
                if (fx == -1)
                {
                    fx = i, fy = j;
                }
                else
                {
                    sx = i, sy = j;
                }
            }
        }
    }

    cout << abs(fx - sx) + abs(fy - sy) - 1;

    return 0;
}