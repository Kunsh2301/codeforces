#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,mindays,maxtemp;
        cin>>n>>mindays>>maxtemp;
        long long ans=0;
        int count=0;
        vector<int>temp(n);
        for(int i=0;i<n;i++){
            cin>>temp[i];
            if(temp[i]<=maxtemp){
                count++;
                if(count>=mindays){
                    ans+=(count-mindays+1);
                }
            }
            else count=0;
        }
        cout<<ans<<endl;    
    }
}