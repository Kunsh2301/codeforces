#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>prices(n);
    for(int i=0;i<n;i++) cin>>prices[i];
    sort(prices.begin(),prices.end());
    int q;
    cin>>q;
    vector<int>spent(q);
    for(int i=0;i<q;i++) cin>>spent[i];
    for(int i=0;i<q;i++){
        int ans=upper_bound(prices.begin(),prices.end(),spent[i])-prices.begin();
        cout<<ans<<endl;
    }
}