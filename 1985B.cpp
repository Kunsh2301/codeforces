#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans=2,res=2;
        for(int i=2;i<=n;i++){
            int k=n/i;
            long long sum=(long long)i*k*(k+1)/2;
            if(sum>ans){
                ans=sum;
                res=i;
            }
        }
        cout<<res<<"\n";
    }
}