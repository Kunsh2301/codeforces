#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t; 
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int conselen=0,maxi=0,total=0;
        for(char x:s){
            if(x=='.'){
                conselen++;
                total++;
            }
            else{
                conselen=0;
            }
            maxi=max(conselen,maxi);
        }
        if(maxi>=3) cout<<2<<endl;
        else cout<<total<<endl;
    }
}