#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,sum=0;
        cin>>n;
        vector<long>nums(n);
        for(int i=0;i<n;i++) cin>>nums[i];
        sort(nums.begin(),nums.end());
        for(int i=1;i<n;i++) sum+=nums[i]-nums[0];
        cout<<sum<<endl;
    }
    return 0;
}