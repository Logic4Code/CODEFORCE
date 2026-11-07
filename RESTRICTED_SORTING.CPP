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
      vector<long long> a(n);
      vector<pair<long long,long long>> b(n);
      for (int i = 0; i < n; i++) {
      cin >> a[i];
      b[i]={a[i],i};
      }
      if(is_sorted(a.begin(),a.end())) cout<<-1<<endl;
      else{
        sort(b.begin(),b.end());
        long long k=INT_MAX;
        for(int i=0;i<n;i++){
            if(b[i].second!=i){
long long x = max(b[i].first-b[0].first,b[n-1].first-b[i].first);
            k = min(k, x);
            }
        }
        cout<<k<<endl;
      }
        
    }
    return 0;
}