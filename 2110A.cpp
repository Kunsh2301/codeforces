#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        int firstEven = -1, lastEven = -1;
        int firstOdd = -1, lastOdd = -1;
        for (int i = 0; i < n; i++) {
            if (a[i] % 2 == 0) {
                if (firstEven == -1)
                    firstEven = i;
                lastEven = i;
            } else {
                if (firstOdd == -1)
                    firstOdd = i;
                lastOdd = i;
            }
        }
        int ans = n;
        if (firstEven != -1) {
            ans = min(ans, firstEven + (n - 1 - lastEven));
        }
        if (firstOdd != -1) {
            ans = min(ans, firstOdd + (n - 1 - lastOdd));
        }
        cout << ans << '\n';
    }
}