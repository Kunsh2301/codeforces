#include <bits/stdc++.h>
using namespace std;
bool beautiful(int a[2][2]) {
    return a[0][0] < a[0][1] && a[1][0] < a[1][1] && a[0][0] < a[1][0] && a[0][1] < a[1][1];
}
void rotateMatrix(int a[2][2]) {
    int temp = a[0][0];
    a[0][0] = a[1][0];
    a[1][0] = a[1][1];
    a[1][1] = a[0][1];
    a[0][1] = temp;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a[2][2];
        cin >> a[0][0] >> a[0][1];
        cin >> a[1][0] >> a[1][1];
        bool ans = false;
        for (int i = 0; i < 4; i++) {
            if (beautiful(a)) {
                ans = true;
                break;
            }
            rotateMatrix(a);
        }
        cout << (ans ? "YES" : "NO") << '\n';
    }
    return 0;
}