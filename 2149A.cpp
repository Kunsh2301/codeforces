#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int minus=0,zero=0;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]<0) minus++;
            else if(a[i]==0) zero++;
        }
        int ans=0;
        if(minus%2==1) ans+=2;
        if(zero>0) ans+=zero;
        cout<<ans<<endl;
    }
}