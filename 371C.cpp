#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int nb,ns,nc;
    cin>>nb>>ns>>nc;
    int pb,ps,pc;
    cin>>pb>>ps>>pc;
    long long r;
    cin>>r;
    long long low=0,high=1e13,ans=-1;
    while(low<=high){
        long long mid=low+(high-low)/2;
        long long needb=0,needs=0,needc=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='B') needb++;
            else if(s[i]=='S') needs++;
            else needc++;
        }
        long long totalb=max(0LL,needb*mid-nb);
        long long totals=max(0LL,needs*mid-ns);
        long long totalc=max(0LL,needc*mid-nc);
        long long cost=totalb*pb+totals*ps+totalc*pc;
        if(cost<=r){
            ans=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    cout<<ans;
}