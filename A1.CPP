#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
     int n,b;
     cin>>n>>b;
     vector<int> a(n);
     for(int i=0;i<n;i++) cin>>a[i];
     bool ans=true;
     if(!is_sorted(a.begin(),a.end())) ans=false;
     if(ans) cout<<"YES"<<endl;
     else if(!ans && b==1) cout<<"NO"<<endl;
     else{
        cout<<"YES"<<endl;
     }     
    }
    return 0;
}