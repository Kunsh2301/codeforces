#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans=0,count=0;
    for(char x:s){
        if(x=='x'){
            count++;
        }
        else count=0;
        if(count>=3) ans++;
    }
    cout<<ans;
    return 0;
}