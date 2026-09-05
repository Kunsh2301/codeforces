#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,ans=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int x,y,z;
        cin>>x>>y>>z;
        int count=0;
        if(x) count++;
        if(y) count++;
        if(z) count++;
        if(count>=2) ans++;
    }
    cout<<ans;
}