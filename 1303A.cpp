#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int zero=0,firstindex=-1,lastindex=-1;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                firstindex=i+1;
                break;
            }
        }
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='1'){
                lastindex=i-1;
                break;
            }
        }
        for(int i=firstindex;i<=lastindex;i++){
            if(s[i]=='0'){
                zero++;
            }
        }
        cout<<zero<<endl;
    }
}