#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        vector<int> v(4,0);
        int prev=0,ans=INT_MAX;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1') v[1]++;
            if(s[i]=='2') v[2]++;
            if(s[i]=='3') v[3]++;
            while(v[1]>0 && v[2]>0 && v[3]>0){
                ans=min(ans,i-prev+1);
                if(s[prev]=='1') v[1]--;
                if(s[prev]=='2') v[2]--;
                if(s[prev]=='3') v[3]--;
                prev++;
            }
        }
        if(ans==INT_MAX) cout<<0<<endl;
        else cout<<ans<<endl;
    }
}