#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    string s;
    cin>>s;
    long long ans=0;
    for(char x:s){
        if(x=='1') ans+=a;
        else if(x=='2') ans+=b;
        else if(x=='3') ans+=c;
        else ans+=d;
    }
    cout<<ans;
}