#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, c;
    cin >> a >> b >> c;
    // sort a, b, c in non-decreasing order
    if (a > b)
    {
        swap(a, b);
    }
    if (a > c)
    {
        swap(a, c);
    }
    if (b > c)
    {
        swap(b, c);
    }

    if (a * a + b * b == c * c)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}