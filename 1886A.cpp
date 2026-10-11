#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        if (n % 3 == 0) {
            if (n >= 12) {
                cout << "YES\n";
                cout << 1 << " " << 4 << " " << n - 5 << "\n";
            }
            else {
                cout << "NO\n";
            }
        }
        else {
            if (n >= 7) {
                cout << "YES\n";
                cout << 1 << " " << 2 << " " << n - 3 << "\n";
            }
            else {
                cout << "NO\n";
            }
        }
    }

    return 0;
}