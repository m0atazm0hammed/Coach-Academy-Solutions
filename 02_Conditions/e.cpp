#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a, b, c;
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

    cout << b << '\n';

    /*
        another solution
        print((a+b+c) - min(a,b,c) - max(a,b,c))
    */

    return 0;
}