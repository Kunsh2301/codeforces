#include<bits/stdc++.h>
using namespace std;
vector<long long> getLast(const vector<long long>& v, int k) {
    int start = max(0, (int)v.size() - k);
    vector<long long> res;
    for (int i = start; i < (int)v.size(); i++) {
        res.push_back(v[i]);
    }
    return res;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,x,y;
        cin>>n>>m>>x>>y;
        vector<int> a(x), b(y);
        for(int i = 0; i < x; i++) cin>>a[i];
        for(int i = 0; i < y; i++) cin>>b[i];
        vector<long long> common;
        vector<long long> onlyA;
        vector<long long> onlyB;
        int i = 0;
        int j = 0;
        while (i < x && j < y) {
            if (a[i] == b[j]) {
                common.push_back(a[i]);
                i++;
                j++;
            }
            else if (a[i] < b[j]) {
                onlyA.push_back(a[i]);
                i++;
            }
            else {
                onlyB.push_back(b[j]);
                j++;
            }
        }
        while (i < x) {
            onlyA.push_back(a[i]);
            i++;
        }
        while (j < y) {
            onlyB.push_back(b[j]);
            j++;
        }
        vector<long long> selected;
        vector<long long> tempA = getLast(onlyA, n);
        vector<long long> tempB = getLast(onlyB, m);
        for (auto v : tempA) selected.push_back(v);
        for (auto v : tempB) selected.push_back(v);
        for (auto v : common) selected.push_back(v);
        sort(selected.begin(), selected.end());
        int keep = min((int)selected.size(), n + m - 1);
        long long ans = 0;
        for (int i = selected.size() - keep; i < selected.size(); i++) {
            ans += selected[i];
        }
        cout << ans << '\n';
    }
}