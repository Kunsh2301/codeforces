#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        bool found = false;
        string first = "", second = "";

        for (int i = 1; i < s.size(); i++) {
            first = s.substr(0, i);
            second = s.substr(i);

            if (second[0] == '0') continue;

            if (stoll(first) < stoll(second)) {
                found = true;
                break;
            }
        }

        if (!found)
            cout << -1 << '\n';
        else
            cout << first << " " << second << '\n';
    }

    return 0;
}