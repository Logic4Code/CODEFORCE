#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k,ans=0;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        vector<bool> b(10, false);
        int c = a[i];

        if (c == 0)
        {
            b[0] = true;
        }
        while (c > 0)
        {
            int digit = c % 10;
            b[digit] = true;
            c = c / 10;
        }
        int p=0;
        for (int d = 0; d <= k; d++) {
            if (!b[d]) {
                p++;
                break;
            }
        }

        if (p==0) {
            ans++;
        }
      
    }
    cout<<ans;
}