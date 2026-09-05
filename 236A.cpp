#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    unordered_map<char,int>freq;
    for(char x:s) freq[x]++;
    if(freq.size()%2==1) cout<<"IGNORE HIM!";
    else cout<<"CHAT WITH HER!";
}