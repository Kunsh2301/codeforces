#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%2==1){
            cout<<"NO"<<endl;
            continue;
        }
        int x=n/2;
        string ans="";
        char curr='A';
        while(x--){
            ans+=curr;
            ans+=curr;
            curr='A'+(curr-'A'+1)%26;
        }
        cout<<"YES"<<endl<<ans<<endl;
    }
}