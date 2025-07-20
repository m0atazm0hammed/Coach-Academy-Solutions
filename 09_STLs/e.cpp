#include <iostream>
#include <deque>

using namespace std;

int main() {
    int tc;

    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        deque<int> dq(n);
        for (auto &i: dq)
            cin >> i;
        int ans[n + 1];
        for (int i = n; i >= 1; --i)
        {
            ans[i] = 0;
            while (dq.back() != i)
            {
                dq.push_back(dq.front());
                dq.pop_front();
                ans[i]++;
            }
            dq.pop_back();
        }
        for (int i = 1; i <= n; ++i)
            cout << ans[i] << " ";
        cout << '\n';
    }
}
