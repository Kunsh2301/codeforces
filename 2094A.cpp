#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        string ans="";
        for(int i=0;i<s.size();i++){
            if(i==0 || s[i-1]==' ') ans+=s[i];
        }
        cout<<ans<<endl;
    }
}