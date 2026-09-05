#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans=0;
    while(n>=100) {
        ans+=n/100;
        n=n%100;
    }
    while(n>=20) {
        ans+=n/20;
        n=n%20;
    }
    while(n>=10) {
        ans+=n/10;
        n=n%10;
    }
    while(n>=5) {
        ans+=n/5;
        n=n%5;
    }
    while(n>=1) {
        ans+=n/1;
        n=n%1;
    }
    cout<<ans;
}