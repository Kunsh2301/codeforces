#include<bits/stdc++.h>
using namespace std;
int removezero(int);
int main(){
    int a,b;
    cin>>a>>b;
    int c=a+b;
    if(removezero(a)+removezero(b)==removezero(c)) cout<<"YES";
    else cout<<"NO";
}
int removezero(int x){
    string temp=to_string(x);
    string ans="";
    for(int i=0;i<temp.size();i++){
        if(temp[i]!='0') ans+=temp[i];
    }
    return stoi(ans);
}