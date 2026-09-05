#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if((a<b && b<c) || (a>b && b>c)) cout<<b<<endl;
        else if((a>c && b<c) || (a<c && b>c)) cout<<c<<endl;
        else cout<<a<<endl;
    }
}