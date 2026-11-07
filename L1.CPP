#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n,k;
    cin>>n>>k;
     string p, q;
   cin >> p >> q;
        q += "six";
        sort(p.begin(), p.end());
        sort(q.begin(), q.end());

       if(p==q) cout <<  "YES\n";
       else cout<<"NO\n";
    }
}