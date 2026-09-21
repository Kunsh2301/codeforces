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
        bool found=true;
        for(int i=1;i<n;i++) if(abs(nums[i]-nums[i-1])!=5 && abs(nums[i]-nums[i-1])!=7) found=false;
        if(found) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}