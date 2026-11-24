#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a,b,c,d,count=0;
        cin >> a>>b>>c>>d;
        while(b<d){
            count++;
            a++;
            b++;
        }
        while(a>c){
            a--;
            count++;
        }
        if(a==c && b==d) cout<<count<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}
