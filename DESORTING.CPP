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
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    if (is_sorted(a.begin(),a.end())) {
    int ans = INT_MAX; 
    for (int i = 0; i < n - 1; i++) {
        int d = a[i + 1] - a[i];
        int x = (d / 2) + 1;
        ans = min(ans, x);
    }
    cout << ans << endl;
    }
else{
        cout << 0 << endl;

}
}
}