#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        unordered_map<char,int> mp;
        for(int i=0;i<n;i++){
            string s;
            cin>>s;
            for(int j=0;j<s.size();j++){
                mp[s[j]]++;
            }
        }
        bool flag = true;
        for(auto it:mp){
            if(it.second%n!=0){
                flag = false;
                break;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}