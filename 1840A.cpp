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
        int i=0;
        string ans="";
        while(i<n){
            char prev=s[i];
            while(i+1<n && s[i+1]!=prev){
                i++;
            }
            ans+=prev;
            i+=2;
        }
        cout<<ans<<endl;
    }
}