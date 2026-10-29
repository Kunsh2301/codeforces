#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int one=0;
        for(char x:s) if(x=='1') one++;
        int ans=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1') ans+=(one-1);
            else ans+=(one+1);
        }
        cout<<ans<<endl;
    }
    return 0;
}