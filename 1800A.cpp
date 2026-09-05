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
        for(auto&x:s) x=tolower(x);
        string temp="";
        for(char x:s){
            if(temp.empty() || temp.back()!=x) temp+=x;
        }
        if(temp=="meow") cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}