#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int mini=INT_MAX;
        for(int i=a;i<=b;i++){
            mini=min(mini,(i-a)+(b-i));
        }
        cout<<mini<<endl;
    }
}