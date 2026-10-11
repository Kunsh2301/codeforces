#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,count=0;
        cin>>n;
        string s=to_string(n);
        for(char x:s) if(x!='0') count++;
        cout<<count<<endl;
        for(int i=0;i<s.size();i++){
            string temp="";
            if(s[i]!='0'){
                temp+=s[i];
                temp.append(s.size()-i-1,'0');
            }
            cout<<temp<<" ";
        }
        cout<<endl;
    }
    return 0;
}