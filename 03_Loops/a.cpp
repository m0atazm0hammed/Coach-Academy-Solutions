#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ll L, R;
    cin >> L >> R;

    ll totalSum = 0;

    for (ll num = L; num <= R; ++num) {
        if (num >= 1 && num <= 9) {
            totalSum += num;
            continue;
        }

        int numDigits = 0;
        ll tempNumForDigits = num;
        while (tempNumForDigits > 0) {
            tempNumForDigits /= 10;
            numDigits++;
        }

        ll currentSumOfPowers = 0;
        ll tempNumForSum = num;
        while (tempNumForSum > 0) {
            int digit = tempNumForSum % 10;
            ll powerResult = 1;
            for (int i = 0; i < numDigits; ++i) {
                powerResult *= digit;
            }
            currentSumOfPowers += powerResult;
            tempNumForSum /= 10;
        }

        if (currentSumOfPowers == num) {
            totalSum += num;
        }
    }

    cout << totalSum << endl;
    return 0;
}
