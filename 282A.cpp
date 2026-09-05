#include<bits/stdc++.h>
using namespace std;
int main(){
    int ans=0;
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        if(s=="X++" || s=="++X") ans++;
        else ans--;
    }
    cout<<ans;
}