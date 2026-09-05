#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    string s=to_string(n);
    int count=0;
    for(char x:s) if(x=='4' || x=='7') count++;
    string check=to_string(count);
    for(char x:check){
        if(x!='4' && x!='7'){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
}