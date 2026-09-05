#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,k;
    cin>>n>>k;
    if(n==1){
        cout<<0;
        return 0;
    }   
    long long maxpipe=1+(k*(k-1))/2;
    if(n>maxpipe){
        cout<<-1;
        return 0;
    }
    long long low=1,high=k-1,ans=-1;
    while(low<=high){
        long long mid=low+(high-low)/2;
        long long pipe=1+mid*(2*k-mid-1)/2;
        if(pipe>=n){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    cout<<ans;  
}