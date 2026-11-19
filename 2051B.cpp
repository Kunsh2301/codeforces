#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b,c;
        cin>>n>>a>>b>>c;
        int ans=3*(n/(a+b+c));
        int remaing=n%(a+b+c);
        if(remaing>0){
            ans++;
            remaing-=a;
        }
        if(remaing>0){
            ans++;
            remaing-=b;
        }
        if(remaing>0){
            ans++;
            remaing-=c;
        }
        cout<<ans<<endl;
    }
    return 0;
}