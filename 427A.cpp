#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,count=0,ans=0;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n>0) count+=n;
        else if(n==-1 && count==0) ans++;
        else if(n==-1) count--;
    }
    cout<<ans<<"\n";
    return 0;
}