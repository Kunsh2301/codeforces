#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=stoi(s);
        if(n%7==0){
            cout<<n<<endl;
            continue;
        }
        bool found=false;
        for(int i=0;i<s.size() && !found;i++){
            char org=s[i];
            for(char j='0';j<='9';j++){
                if(j=='0' && i==0) continue;
                s[i]=j;
                int x=stoi(s);
                if(x%7==0){
                    cout<<x<<endl;
                    found=true; 
                    break;
                }
            }
            s[i]=org;
        }
    }
}