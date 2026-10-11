#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        vector<int>nums(k);
        for(int i=0;i<k;i++) cin>>nums[i];
        int three=0,two=0;
        for(int i=0;i<k;i++){
            if(nums[i]>=3) three++;
            if(nums[i]>=2) two++;
        }
        if(three || two>=2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}