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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int l = 0;
        int r = n - 1;

        long long as = 0;
        long long bs = 0;
        int ans = 0;

        while (l <= r)
        {
            if (as < bs)
            {
                as += a[l];
                l++;
            }
            else if (bs < as)
            {
                bs += a[r];
                r--;
            }
            else
            {
                ans = l + (n - 1 - r);
                as += a[l];
                l++;
            }
        }
        if (as == bs)
        {
            ans = l + (n - 1 - r);
        }
        cout << ans <<endl;
    }
}