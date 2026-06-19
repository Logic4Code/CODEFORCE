#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
int n;
    cin >> n;
    vector<int> a(n);
    int mini = INT_MAX; 
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        mini = min(mini, a[i]);
    }
    
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        ans = __gcd(ans, a[i] - mini);
    }
    
    if (ans == 0) {
        cout << -1 << endl;
    } else {
        cout << ans << endl;
    }
}
}