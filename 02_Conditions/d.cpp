#include <bits/stdc++.h>
using namespace std;

int main()
{

    int D;
    cin >> D;

    if (D >= 1 && D <= 28)
    {
        cout << 12 << endl;
    }
    else if (D >= 29 && D <= 30)
    {
        cout << 11 << endl;
    }
    else if (D == 31)
    {
        cout << 7 << endl;
    }
    else
    {
        cout << 0 << endl;
    }

    return 0;
}