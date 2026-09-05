#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n; 
    string a="I hate that ";
    string b="I love that ";
    string c="I hate it ";
    string d="I love it ";
    string  s="";
    for(int i=1;i<=n;i++){
        if(i==n){
            if(i%2==0){
                s+=d;
            }
            else{
                s+=c;
            }
        }
        else{
            if(i%2==0){
                s+=b;
            }
            else{
                s+=a;
            }
        }
    }
    cout<<s;
    return 0;
}