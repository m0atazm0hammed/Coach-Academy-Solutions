#include <bits/stdc++.h>
using namespace std;

int main()
{
    int complete, error;
    cin >> complete >> error;

    if (complete >= 90 && error <= 5)
        cout << "Ready for Review";
    else if (complete >= 50 && error > 10)
        cout << "In Progress (High Error)";
    else if (complete >= 50 && error <= 10)
        cout << "In Progress (Low Error)";
    else
        cout << "Needs Rework";

    return 0;
}