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
        int start=-1,end=-1;
        for(int i=0;i<s.size();i++){
            if(s[i]=='B'){
                start=i;
                break;
            }
        }
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='B'){
                end=i;
                break;
            }
        }
        if(start!=-1 && end!=-1) cout<<end-start+1<<endl;
        else cout<<0<<endl;
    }
}