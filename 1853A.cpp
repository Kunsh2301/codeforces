#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>nums(n);
        for(int i=0;i<n;i++) cin>>nums[i];
        bool sorted=true;
        for(int i=1;i<n;i++){
            if(nums[i]<nums[i-1]){
                sorted=false;
                break;
            }
        }
        int mini=INT_MAX;
        for(int i=1;i<n;i++){
            mini=min(mini,(nums[i]-nums[i-1])/2+1);
        }
        if(sorted) cout<<mini<<endl;
        else cout<<0<<endl;
    }
}