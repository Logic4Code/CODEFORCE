#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
int n;
    long long x;
    cin >> n >> x;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.rbegin(), a.rend());
    
    long long s = 0;
    int ans = 0;
    
    for (int i = 0; i < n; i++) {
        s += a[i];
        if (s >= x * (i + 1)) {
            ans = i + 1;
        } else {
            break;
        }
    }
    
    cout << ans << endl;
}
}