#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        int count=0;
        if(s[0]!='a') count++;
        if(s[1]!='b') count++;
        if(s[2]!='c') count++;
        if(count<=2) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}