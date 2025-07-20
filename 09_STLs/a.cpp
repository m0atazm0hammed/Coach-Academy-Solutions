#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    deque<int> dq(n);
    int a = 0;
    int b = 0;
    for (int i = 0; i < n; i++) {
        cin >> dq[i];
    }
    for (int i = 0; i < n; i++) {

        if (i % 2 == 0) {

            if (dq.front() > dq.back()) {
                a += dq.front();
                dq.pop_front();
            } else {
                a += dq.back();
                dq.pop_back();
            }
        } else {

            if (dq.front() > dq.back()) {
                b += dq.front();
                dq.pop_front();
            } else {
                b += dq.back();
                dq.pop_back();
            }
        }
    }


    cout << a << " " << b << endl;
    return 0;
}







