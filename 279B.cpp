#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    cin>>n>>t;
    vector<int>minutes(n);
    for(int i=0;i<n;i++){
        cin>>minutes[i];
    }
    int sum=0,prev=0,maxi=0;
    for(int i=0;i<n;i++){
        sum+=minutes[i];
        while(sum>t){
            sum-=minutes[prev];
            prev++;
        }
        maxi=max(maxi,i-prev+1);
    }
    cout<<maxi<<endl;
}