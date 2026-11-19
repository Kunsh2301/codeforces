#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>nums(n);
        int sum=0,idx=0,maxi=0;
        for(int i=0;i<n;i++){
            cin>>nums[i];
            sum+=nums[i];
            if(nums[i]>maxi){
                maxi=nums[i];
                idx=i;
            }
        }
        if(2*maxi>sum) cout<<idx+1<<endl;
        else cout<<1<<endl;
    }
    return 0;
}