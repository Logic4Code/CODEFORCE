#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
     int n,a,b;
     cin>>n>>a>>b;
     if(a==n+1 && b==a+1 ) cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
        
    }
    return 0;
}