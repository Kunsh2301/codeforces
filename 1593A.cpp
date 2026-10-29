#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;
        cout<<max(0LL,max(b, c)-a+1)<<" "<<max(0LL,max(a,c)-b+1)<<" "<<max(0LL,max(a,b)-c+1)<<"\n";
    }
    return 0;
}