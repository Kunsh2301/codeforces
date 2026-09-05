#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int x=min(a,b);
    a-=x;
    b-=x;
    int ans=0;
    if(b/2!=0) ans=b/2;
    if(a/2!=0) ans=a/2;
    cout<<x<<" "<<ans;
    return 0;
}