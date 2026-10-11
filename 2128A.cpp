#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long c;
        cin >> n >> c;
        vector<long long> weights(n);
        for (int i = 0; i < n; i++) {
            cin >> weights[i];
        }
        int ans = 0;
        while (!weights.empty()) {
            int freeIndex = -1;
            for (int i = 0; i < (int)weights.size(); i++) {
                if (weights[i] <= c) {
                    if (freeIndex == -1 ||
                        weights[i] > weights[freeIndex]) {
                        freeIndex = i;
                    }
                }
            }
            if (freeIndex != -1) {
                weights.erase(weights.begin() + freeIndex);
            }
            else {
                ans++;
                weights.erase(weights.begin());
            }
            for (long long &x : weights) {
                x *= 2;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}