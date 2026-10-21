#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    int minabs=INT_MAX;
    for(int x:nums) minabs=min(abs(x),minabs);
    cout<<minabs;
    return 0;
}