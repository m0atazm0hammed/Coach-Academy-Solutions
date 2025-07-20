#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int>v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];
    vector<int>neg, pos, zer;
    for (int i = 0; i < n; ++i)
    {
        if (v[i] < 0)
        {
            neg.push_back(v[i]);
            v.erase(v.begin() + i);
            break;
        }
    }
    for (int i = 0; i < v.size(); ++i)
    {
        if (v[i] > 0)
        {
            pos.push_back(v[i]);
            v.erase(v.begin() + i);
            break;
        }
    }
    if (pos.empty())
    {
        for (int i = 0; i < v.size(); ++i)
        {
            if (v[i] < 0)
            {
                pos.push_back(v[i]);
                v.erase(v.begin() + i);
                i--;
                if (pos.size () == 2)
                    break;
            }
        }
    }
    for (int i = 0; i < v.size(); ++i)
        zer.push_back(v[i]);
    cout << neg.size() << ' ';
    for (auto i : neg)
        cout << i << ' ';
    cout << '\n';
    cout << pos.size() << ' ';
    for (auto i : pos)
        cout << i << ' ';
    cout << '\n';
    cout << zer.size() << ' ';
    for (auto i : zer)
        cout << i << ' ';
    cout << '\n';
}
