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
        int odd=0,even=0;
        for(int x:nums){
            if(x%2==1) odd++;
            else even++;
        }
        cout<<min(odd,even)<<endl;
    }
    return 0;
}