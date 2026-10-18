#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int x=0,y=0;
        bool found=false;
        for(char z:s){
            if(z=='L') x--;
            else if(z=='R') x++;
            else if(z=='U') y++;
            else y--;
            if(x==1 && y==1){
                found=true;
                break;
            }
        }
        cout<<(found?"YES":"NO")<<endl;
    }
    return 0;
}