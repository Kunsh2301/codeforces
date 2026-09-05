#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long squares = sqrt(n);
        long long cubes = cbrt(n);
        long long sixth = 0;
        for (long long i = 1; i * i * i * i * i * i <= n; i++) {
            sixth++;
        }
        cout<<squares+cubes-sixth<<'\n';
    }
    return 0;
}