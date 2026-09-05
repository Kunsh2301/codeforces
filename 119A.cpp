#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,n;
    cin>>a>>b>>n;
    int i=0;
    while(true){
        int curr;
        if(i%2==0) curr=__gcd(n,a);
        else curr=__gcd(n,b);
        if(curr>n){
            if(i%2==0) cout<<"1";
            else cout<<"0";
            break;
        }
        i++;
        n-=curr;
    }
}