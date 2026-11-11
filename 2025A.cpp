#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        int n=s1.size(),m=s2.size();
        int l=0;
        while(l<min(n,m) && s1[l]==s2[l]) l++;
        int ans=min(n+m,n+m-l+1);
        cout<<ans<<endl;
    }
    return 0;
}