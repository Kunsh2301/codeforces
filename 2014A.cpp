#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>nums(n);
        for(int i=0;i<n;i++) cin>>nums[i];
        int currgold=0,ans=0;
        for(int& x:nums){
            if(x==0 && currgold>0){
                ans++;
                --currgold;
            }
            else if(x>=k){
                currgold+=x;
            }
        }
        cout<<ans<<endl;
    }
}