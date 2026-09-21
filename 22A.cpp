#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    bool found=false;
    int val=-1;
    sort(nums.begin(),nums.end());
    for(int i=1;i<n;i++){
        if(nums[i]!=nums[0]){
            found=true;
            val=nums[i];
            break;
        }
    }
    if(found) cout<<val;
    else cout<<"NO";
}