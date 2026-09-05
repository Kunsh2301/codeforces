#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        string temp="codeforces";
        int count=0;
        for(int i=0;i<10;i++){
            if(s[i]!=temp[i]){
                count++;
            }
        }        cout<<count<<endl;
    }
    return 0;
}