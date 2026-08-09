#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        bool ans=false;
        for(int i=2;i<=sqrt(n+1);i++){
            if((n+1)%i==0) ans=true;
        }
        if(ans) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}