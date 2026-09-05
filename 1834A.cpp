#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,nega=0,sum=0,ans=0;
        cin>>n;
        vector<int>nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
            if(nums[i]==-1) nega++;
            sum+=nums[i];
        }
        if(nega>n/2) ans+=nega-n/2;
        if((nega-ans)%2==1) ans++;
        cout<<ans<<endl;
    }
}