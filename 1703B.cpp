#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,count=0;
        cin>>n;
        string s;
        cin>>s;
        vector<int>store(26,0);
        for(char x:s){
            if(store[x-'A']==0){
                store[x-'A']=1;
                count+=2;
            }
            else{
                count++;
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}