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
        if(k>=2) cout<<"YES"<<endl;
        else{
            bool sorted=true;
            for(int i=1;i<n;i++){
                if(nums[i]<nums[i-1]){
                    sorted=false;
                    break;
                }
            }
            if(sorted) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;

        }
    }
    return 0;
}