#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    long double totalsum=1LL*100*n;
    long double got=0;
    for(int i=0;i<n;i++){
        got+=nums[i];
    }
    cout<<fixed<<setprecision(7)<<(got/totalsum)*100.00;
    return 0;
}