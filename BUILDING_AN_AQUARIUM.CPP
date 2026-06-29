#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
int n;
    long long x;
    cin >> n >> x;
    
    vector<long long> a(n);
    long long maxi = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        maxi = max(maxi, a[i]);
    }
    
    long long l = 1;
    long long r = maxi + x; 
    long long ans = 1;
    
    while (l <= r) {
        long long mid = l + (r - l) / 2;
        
        long long p = 0;
        for (int i = 0; i < n; ++i) {
            if (mid > a[i]) {
                p += (mid - a[i]);
            }
            if (p > x) break;
        }
        
        if (p <= x) {
            ans = mid;     
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    
    cout << ans << endl;
}
}