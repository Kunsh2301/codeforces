#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int first=0,last=-1;
        for(int i=1;i<s.size();i++){
            if(s[i]!=s[first]){
                last=i;
                break;
            }
        }
        if(last==-1) cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            swap(s[first],s[last]);
            cout<<s<<endl;
        }
    }
}