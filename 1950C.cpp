#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        cin>>s;
        string temp="";
        int hour=stoi(s.substr(0,2));
        if(hour<12) temp="AM";
        else temp="PM";
        string minute=s.substr(3,2);
        if(hour>12) hour-=12;
        if(hour==0) hour=12;
        string hour_str=to_string(hour);
        if(hour_str.length()==1) hour_str="0"+hour_str;
        cout<<hour_str<<":"<<minute<<" "<<temp<<endl;
    }
}