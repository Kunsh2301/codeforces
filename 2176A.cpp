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
        int count=0,maxi=nums[0];
        for(int j=1;j<n;j++){
            if(nums[j]<maxi) count++;
            else maxi=nums[j];
        }
        cout<<count<<endl;
    }
    return 0;
}