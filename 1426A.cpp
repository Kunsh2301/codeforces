#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,ans=0;
        cin>>n>>x;
        if(n<=2){
            cout<<1<<endl;
            continue;
        }
        n-=2;
        ans++;
        if(n%x==0) ans+=n/x;
        else ans+=n/x+1;
        cout<<ans<<endl;
    }
}