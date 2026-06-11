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
        vector<int> b(n);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
      for(int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
      vector<int> as(2 * n + 1, 0);
        vector<int> bs(2 * n + 1, 0);

        int cs = 1;
        as[a[0]] = max(as[a[0]], cs);
        for (int i = 1; i < n; i++) {
            if (a[i] == a[i - 1]) {
                cs++;
            } else {
                cs = 1; 
            }
            as[a[i]] = max(as[a[i]], cs);
        }

        cs = 1;
        bs[b[0]] = max(bs[b[0]], cs);
        for (int i = 1; i < n; i++) {
            if (b[i] == b[i - 1]) {
                cs++;
            } else {
                cs = 1; 
            }
            bs[b[i]] = max(bs[b[i]], cs);
        }

        int ans = 0;
        for (int i = 1; i <= 2 * n; i++) {
            ans = max(ans, as[i] + bs[i]);
        }
        cout<<ans<<endl;
    }
}