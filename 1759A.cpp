#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string temp="";
    for(int i=0;i<20;i++) temp+="Yes";
    while(t--){
        string s;
        cin>>s;
        if(temp.find(s)!=string::npos){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }   
    }
}