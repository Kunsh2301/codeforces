#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        int odd=0,even=0,ans=0;
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                even++;
                if(odd>1) ans+=odd-1;
                odd=0;
            }
            else{
                odd++;
                if(even>1) ans+=even-1;
                even=0;
            }
        }
        if (odd > 1) ans += odd - 1;
        if (even > 1) ans += even - 1;
        cout<<ans<<endl;
    }
    return 0;
}