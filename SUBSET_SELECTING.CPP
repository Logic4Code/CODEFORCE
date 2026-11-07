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
      vector<int> f(n+1,0);
      for (int i = 0; i < n; i++) {
      cin >> a[i];
     if(a[i]<n) f[a[i]]++;
      }
     long long x = 0;
        int ans = 0;

        for (int i = 0; i <= n; i++) {
            if (f[i] == 0) {
                break;
            }
            x += f[i];
            if (x < (i + 1) * k) {
                break;
            }
            ans = i + 1;
        }
     cout<<ans<<endl;   
    }
    return 0;
}