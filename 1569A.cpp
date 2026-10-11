#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int l=-1,r=-1,prev=0;
        int a=0,b=0;
        for(int right=0;right<n;right++){
            if(s[right]=='a') a++;
            else b++;
            while(prev<right && a!=b){
                if(s[prev]=='a') a--;
                else b--;
                prev++;
            }
            if(a==b){
                l=prev+1;
                r=right+1;
                break;
            }
        }
        if(l!=-1 && r!=-1) cout<<l<<" "<<r<<endl;
        else cout<<"-1 -1"<<endl;
    }
    return 0;
}