#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,count=0,timeval=240;
    cin>>n>>k;
    timeval-=k;
    if(timeval<=0){
        cout<<0;
        return 0;
    }
    else{
        for(int i=1;i<=n;i++){
            timeval-=i*5;
            if(timeval>=0) count++;
            else break;
        }
    }
    cout<<count;
}