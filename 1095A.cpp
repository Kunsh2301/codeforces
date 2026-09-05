#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    string ans="";
    int gap=0;
    for(int i=0;i<n;i+=gap){
        ans+=s[i];
        gap++;
    }
    cout<<ans<<endl;
}