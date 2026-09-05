#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        s[0]=toupper(s[0]);
        s[1]=toupper(s[1]);
        s[2]=toupper(s[2]);
        if(s!="YES") cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}