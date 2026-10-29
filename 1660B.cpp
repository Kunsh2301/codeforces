#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        if(n==1){
            if(nums[0]==1) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
            continue;
        }
        sort(nums.begin(),nums.end());
        if(nums[n-1]-nums[n-2]>1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}