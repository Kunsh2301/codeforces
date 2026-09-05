#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,l;
    cin>>n>>l;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int diff=0;
    for(int i=1;i<n;i++){
        diff=max(diff,a[i]-a[i-1]);
    }
    double ans=max({(double)a[0],(double)l-a[n-1],diff/2.0});
    cout << fixed << setprecision(10) << ans << endl;
}