#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int>freq(26,0);
    for(char x:s) freq[tolower(x)-'a']++;
    for(int i=0;i<26;i++){
        if(freq[i]==0){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
}