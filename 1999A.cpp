#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s=to_string(n);
        cout<<(s[0]-'0')+(s[1]-'0')<<"\n";
    }
    return 0;
}