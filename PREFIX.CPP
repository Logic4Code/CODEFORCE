#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
      int n;
    cin >> n;
    vector<long long>a(n+1);
    for (int i = 1; i <= n; i ++ ) cin >> a[i];
    long long ans = a[1], mn = a[1], mx = a[1];
    for (int i = 2; i <= n; i ++ ){
        long long x = max({a[i] - mn, a[i], a[i] + mx});
        ans = max(ans, x);
        long long mni = min({a[i], mn + a[i], 2 * mn + a[i]}), mxi = max({a[i], mx + a[i], 2 * mx + a[i]});
        mn = mni,  mx = mxi;
    }
    cout << ans << '\n';
    }
    return 0;
}