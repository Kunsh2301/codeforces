#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s=to_string(n);
        int mini=INT_MAX;
        for(int i=0;i<s.size();i++) mini=min(mini,s[i]-'0');
        cout<<mini<<endl;
    }
}