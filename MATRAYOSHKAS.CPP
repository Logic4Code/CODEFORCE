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
     map<int,int> x;
      vector<long long> a(n);
      bool p=true,q=true;
      for (int i = 0; i < n; i++) {
      cin >> a[i];
      x[a[i]]++;
      if(x[a[i]]==n) q=false;
      }
      if(!q) cout<<n<<"\n";
      else {
            int ans = 0;
            int b = -1;
            int c = 0;

            for (auto const& v : x) {
                int l = v.first;
                int m = v.second;

                if (l == b + 1) {
                    ans += max(0, m - c);
                } else {
                    ans += m;
                }
                b = l;
                c = m;
            }

            cout << ans << "\n";
        }
    }
    return 0;
}