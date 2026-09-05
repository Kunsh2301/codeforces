#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        bool isvalid=true;
        for(int i=1;i<n;i++){
            if(isdigit(s[i]) && isalpha(s[i-1])){
                isvalid=false;
                break;
            }
        }
        int prevdigit=-1;
        for(int i=0;i<n;i++){
            if(isdigit(s[i])){
                if(prevdigit!=-1 && (s[i]-'0')<prevdigit){
                    isvalid=false;
                    break;
                }
                prevdigit=s[i]-'0';
            }
        }
        char prevchar='0';
        for(int i=0;i<n;i++){
            if(isalpha(s[i])){
                if(prevchar!='0' && s[i]<prevchar){
                    isvalid=false;
                    break;
                }
                prevchar=s[i];
            }
        }
        if(isvalid){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}