#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        char x;
        cin>>x;
        string s="codeforces";
        if(s.find(x)==string::npos) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}