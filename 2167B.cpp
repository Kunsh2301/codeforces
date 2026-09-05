#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s,t;
        cin>>s>>t;
        unordered_map<char,int> m;
        bool can=true;
        for(char x:s) m[x]++;
        for(char x:t){
            if(m[x]==0){
                cout<<"NO\n";
                can=false;
                break;
            }
            else m[x]--;
        }
        if(s.size()==t.size() && can){
            cout<<"YES\n";
        }
    }
}