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
        int sum=accumulate(nums.begin(),nums.end(),0);
        if(sum<n) cout<<1<<endl;
        else cout<<sum-n<<endl;
    }
    return 0;
}