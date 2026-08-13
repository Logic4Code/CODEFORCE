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
     long long s=0;
      vector<long long> a(n);
      for (int i = 0; i < n; i++) {
      cin >> a[i];
      s+=a[i];
      }
   sort(a.begin(), a.end());
        long long ans = 0;
        for (int i = n; i >= 1; i--) {
            if (k >= s) {
                long long x = (k - s) / i + 1;
                ans += x;
            }
            s -= a[i - 1];
        }
        cout << ans << "\n";
    }
    return 0;
}