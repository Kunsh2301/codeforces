#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int s;
        cin>>s;
        if(s<10){
            cout<<s<<endl;
        }
        else{
            string ans="";
            for(int i=9;i>=1;i--){
                if(s>=i){
                    s-=i;
                    ans+=to_string(i);
                }
            }
            reverse(ans.begin(),ans.end());
            cout<<ans<<endl;
        }
    }
}