#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int> a(4);
        for(int i=0;i<4;i++){
            cin>>a[i];
        }
        vector<int>cand={a[0]+a[1],a[2]-a[1],a[3]-a[2]};
        int ans=0;
        for(int x:cand){
            int count=0;
            if(x==a[0]+a[1]) count++;
            if(x==a[2]-a[1]) count++;
            if(x==a[3]-a[2]) count++;
            ans=max(ans,count); 
        }
        cout<<ans<<endl ;
    }
}