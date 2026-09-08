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
      for (int i = 0; i < n; i++) {
      cin >> a[i];
      }
      long long ans=0;
       for (int i = 0; i <n; ++i) {
        ans = __gcd(ans, abs(a[i] - (i+1)));
    }
    cout<< ans<<endl; 
    }
    return 0;
}