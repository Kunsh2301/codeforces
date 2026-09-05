#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<int>ans;
    unordered_map<int,int>mp;
    for(int i=n-1;i>=0;i--){
        if(mp.find(nums[i])==mp.end()){
            ans.push_back(nums[i]);
            mp[nums[i]]=1;
        }
    }
    reverse(ans.begin(), ans.end());
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}