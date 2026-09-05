#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    unordered_map<char,int> mp;
    for(int i=0;i<s.size();i++){
        if(isalpha(s[i])) mp[s[i]]++;
    }
    cout<<mp.size()<<endl;  
}