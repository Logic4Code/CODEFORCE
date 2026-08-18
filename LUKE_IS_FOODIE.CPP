#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
     int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int b = a[0], c = a[0], i = 0, ans = 0;
        while (i < n)
        {
            if (b >= a[i])
            {
                b = a[i];
            }
            if (c <= a[i])
            {
                c = a[i];
            }
            if (c - b > 2*k)
            {
                ans++;
                
                b = a[i];
                c = a[i];
            }
            i++;
        }
        cout << ans << endl;
        
    }
    return 0;
}