#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long x, y;
    cin >> x >> y;
    if (x == 0 && y == 0)
    {
        cout << "Origin\n";
    }
    else if (x == 0)
    {
        cout << "Y Axis\n";
    }
    else if (y == 0)
    {
        cout << "X Axis\n";
    }
    else if (x > 0 && y > 0)
    {
        cout << "Q1\n";
    }
    else if (x < 0 && y > 0)
    {
        cout << "Q2\n";
    }
    else if (x < 0 && y < 0)
    {
        cout << "Q3\n";
    }
    else if (x > 0 && y < 0)
    {
        cout << "Q4\n";
    }

    return 0;
}