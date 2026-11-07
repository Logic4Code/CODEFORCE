#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> a(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        long long ans = 0;
        for (long long i = 0; i < n - 1; i++)
        {
            ans += (a[i + 1] - a[i]) * (min(i + 1, n - i - 1));
        }
        cout << ans << ' ' << a[n - 1] - a[0] << endl;
    }
    return 0;
}