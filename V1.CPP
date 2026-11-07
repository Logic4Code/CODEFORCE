#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
     int n,a;
     cin>>n>>a;
     if(n>0 && a>0 || n<0 && a<0) cout<<abs(n-a)<<endl;
     else {
        if(abs(n)==abs(a)) cout<<0<<endl;
        else {
            n=abs(n);
            a=abs(a);
            cout<<abs(n-a)-1<<endl;
        }
     }
    
        
    }
    return 0;
}