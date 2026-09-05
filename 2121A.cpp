#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        int ans=0;
        int rightdist=abs(a[n-1]-s),leftdis=abs(a[0]-s);
        if(leftdis>rightdist) ans+=rightdist+a[n-1]-a[0];
        else ans+=leftdis+a[n-1]-a[0];
        cout<<ans<<endl;
    }
}