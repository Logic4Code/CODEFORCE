#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long k;
        cin >> n >> k;

        vector<long long> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());
        int st = 0, end = 1;
        bool v = true;
        while (end < n && st < n)
        {
            if (st != end && a[end] - a[st] == k)
            {
                cout << "YES\n";
                v = false;
                break;
            }
            else if (a[end] - a[st] < k)
            {
                end++;
            }
            else
            {
                st++;
            }
            if (st == end)
            {
                end++;
            }
        }

        if (v)
            cout << "NO\n";
    }
}