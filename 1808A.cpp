#include<bits/stdc++.h>
using namespace std;
int lucky(int x){
    int mini=INT_MAX,maxi=INT_MIN;
    while(x!=0){
        mini=min(mini,x%10);
        maxi=max(maxi,x%10);
        x/=10;
    }
    return maxi-mini;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int i,j;
        cin>>i>>j;
        int luckyone=INT_MIN,ans=INT_MIN;
        for(int z=i;z<=min(i+100,j);z++){
            if(lucky(z)>luckyone){
                luckyone=lucky(z);
                ans=z;
            }
        }
        cout<<ans<<"\n";
    }
}