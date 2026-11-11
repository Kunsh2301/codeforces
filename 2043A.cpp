#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,ans=1;
        cin>>n;
        while(n>3){
            n/=4;
            ans=ans*2;
        }
        cout<<ans<<endl;
    }
    return 0;
}