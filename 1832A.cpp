#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s.size()<=3){
            cout<<"NO"<<endl;
            continue;
        }
        unordered_map<char,int>store;
        for(int x:s) store[x]++;
        char curr=s[0];
        bool found=false;
        for(char x:s){
            if(x!=curr && store[x]>=2){
                found=true;
                break;
            }
        }
        if(found) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}