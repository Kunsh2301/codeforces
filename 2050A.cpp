#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<string>nums(n);
        int ans=0,len=0;
        bool found=true;
        for(int i=0;i<n;i++){
            cin>>nums[i];
            if(nums[i].size()+len<=m && found){
                len+=nums[i].size();
                ans++;
            }
            else found=false;
        }
        cout<<ans<<endl;
    }
}