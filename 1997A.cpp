#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        bool found=false;
        for(int i=1;i<s.size();i++){
            if(s[i]==s[i-1]){
                found=true;
                s.insert(s.begin()+i,(s[i]+1)%26+'a');
                break;
            }
        }
        if(found) cout<<s<<endl;
        else{
            s+=(s[s.size()-1]+1)%26+'a';
            cout<<s<<endl;
        }
    }
}