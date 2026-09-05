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
        int maxi=-1;
        for(char x:s) maxi=max(maxi,x-'a'+1);
        cout<<maxi<<endl;
    }
}