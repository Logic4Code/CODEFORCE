#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, b,e=0;
        int d = 0;
        cin >> n >> b;
         int ans = b;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        if (a[i] % b == 0) d++;
         ans = min(ans, (b - (a[i] % b)) % b);
         if (a[i] % 2 == 0) e++;
        }
        if (d>0)
        {
            cout << 0 << endl;
        }
        else
        {
            if (b == 4) {
                int x = max(0, 2 -e);
                ans = min(ans, x);
            }
            cout << ans << endl;
        }
    }
}
