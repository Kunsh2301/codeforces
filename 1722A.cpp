#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        if(s!="Timru") cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}