#include <bits/stdc++.h>
using namespace std;
int main()
{
int n, k;
    cin >> n >> k;
    
    vector<double> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    double s = 0;
    double w = 0;
    
    for (int i = 0; i < n; ++i) {
        s += a[i] * min({(long long)i + 1, (long long)n - i, (long long)k, (long long)n - k + 1});
    }
    
   double d = n - k + 1;
    double ans = ( double)s / d;
    
    cout << setprecision(15) << ans;
}