#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int lower=0,upper=0;
    for(char x:s){
        if(islower(x)) lower++;
        else upper++;
    }
    if(lower>=upper){
        for(int i=0;i<s.size();i++) s[i]=tolower(s[i]);
    }
    else{
        for(int i=0;i<s.size();i++) s[i]=toupper(s[i]);
    }
    cout<<s;
}