#include<bits/stdc++.h>
using namespace std;
int main(){
    int k2,k3,k5,k6;
    cin>>k2>>k3>>k5>>k6;
    long long ans=0;
    while(k2>0 && k5>0 && k6>0){
        ans+=256;
        k2--;
        k5--;
        k6--;
    }
    while(k3>0 && k2>0){
        ans+=32;
        k3--;
        k2--;
    }
    cout<<ans;
    return 0;
}