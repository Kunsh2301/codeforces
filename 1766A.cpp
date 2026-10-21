#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int place=1,ans=0;
        while(place<=n){
            for(int d=1;d<=9;d++){
                int temp=d*place;
                if(temp<=n) ans++;
            }
            place*=10;
        }
        cout<<ans<<"\n";
    }
}