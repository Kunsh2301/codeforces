#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        bool found=false;
        for(int i=0;i<s.size();i++){
            if(s.substr(0,i)+s.substr(0,i)==s){
                found=true;
                break;
            }
        }
        if(found) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}