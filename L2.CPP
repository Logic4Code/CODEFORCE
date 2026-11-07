#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
     int x,y,z;
     cin>>x>>y>>z;
     int n=x+y+z;
     string ans;
     if(x>=y && x>=z) while(n--) ans+="P";
     else if(y>=x && y>=z) while(n--) ans+="R"; 
     else while(n--) ans+="S";
     cout<<ans<<endl;
    }
    return 0;
}