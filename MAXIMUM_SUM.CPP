#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());

       vector<long long> pre(n + 1, 0);
    for (int i = 0; i < n; i++) {
        pre[i + 1] = pre[i] + a[i];
    }
         long long ans=0;
        for (int i = 0; i <=k; i++)
        {
         ans = max(ans, pre[n - (k - i)] - pre[2 * i]);
        }
        cout<<ans<<endl;
    }
}