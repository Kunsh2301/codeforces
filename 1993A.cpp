#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        int ca=0,cb=0,cc=0,cd=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='A') ca++;
            else if(s[i]=='B') cb++;
            else if(s[i]=='C') cc++;
            else if(s[i]=='D') cd++;
        }
        int ans=0;
        ans+=ca>=n?n:ca;
        ans+=cb>=n?n:cb;
        ans+=cc>=n?n:cc;
        ans+=cd>=n?n:cd;
        cout<<ans<<endl;
    }
}