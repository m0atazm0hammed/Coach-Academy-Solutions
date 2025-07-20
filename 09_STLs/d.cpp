#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int main() {
    int n, m;

    cin >> n >> m;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    deque<int>dq(n);
    for (int i = 0; i < n; ++i)
      dq[i] = i;
    while (dq.size() > 1)
    {
        int child = dq.front();
        v[child] -= m;
        dq.pop_front();
        if (v[child] > 0)
            dq.push_back(child);
    }
    cout << dq.front() + 1;
}
