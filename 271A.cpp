#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(true){
        n++;
        string s=to_string(n);
        unordered_set<char> st;
        for(int i=0;i<s.size();i++){
            st.insert(s[i]);
        }
        if(st.size()==4){
            cout<<n<<endl;
            break;
        }        
    }
}