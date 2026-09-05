#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==1){
            cout<<2<<endl;
        }
        else{
            int ans=0;
            ans+=n/3;
            if(n%3==1 || n%3==2) ans++;
            cout<<ans<<endl;
        }
    }
}