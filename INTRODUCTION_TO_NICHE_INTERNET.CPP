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
      vector<long long> a(n);
      for (int i = 0; i < n; i++) {
      cin >> a[i];
      }
    sort(a.begin(),a.end());
    if(k<n && a[n-k-1]==a[n-1]){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
        for(int i=n-k;i<n;i++){
            cout<<a[i]<<" ";
        }
        for(int i=n-k-1;i>=0;i--){
            cout<<a[i]<<" ";
        }  
        cout<<endl;
    }
    }
    return 0;
}