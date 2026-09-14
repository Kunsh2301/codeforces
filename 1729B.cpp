#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    unordered_map<int,char>mp;
    for(int i=0;i<26;i++){
        mp[i+1]='a'+i;
    }
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        string ans="";
        int i=n-1;
        while(i>=0){
            if(s[i]=='0'){
                int num=(s[i-2]-'0')*10+(s[i-1]-'0');
                ans+=mp[num];
                i-=3;
            }
            else{
                int num=s[i]-'0';
                ans+=mp[num];
                i--;
            }
        }
        reverse(ans.begin(),ans.end());
        cout<<ans<<endl;
    }
}