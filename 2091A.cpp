#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int zero = 3, one = 1, two = 2, three = 1, five = 1;
        int ans = 0;
        vector<int>nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
            if (nums[i] == 0 && zero > 0) zero--;
            else if (nums[i] == 1 && one > 0) one--;
            else if (nums[i] == 2 && two > 0) two--;
            else if (nums[i] == 3 && three > 0) three--;
            else if (nums[i] == 5 && five > 0) five--;
            if (ans == 0 && zero == 0 && one == 0 && two == 0 && three == 0 && five == 0) {
                ans = i+1;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}