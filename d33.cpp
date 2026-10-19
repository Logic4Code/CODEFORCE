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
        cin >> n;
        vector<pair<int, int>> b(n - 4);
        vector<long long> a(n);
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n - 4; i++)
        {
            b[i].second = i + 1;
            b[i].first = a[i] + a[i + 2] - a[i + 4];
        }
        sort(b.begin(), b.end());
        int ans = 0;
        int i = 0;
        while (i < n - 4)
        {
            int x = i;
            while (i + 1 < n - 4 && b[i].first == b[i + 1].first)
            {
                i++;
            }
            int p = (i - x) * (i - x + 1);
            p = p / 2;

            int j = x;
            while (j <= i)
            {
                for (int k = j + 1; k <= i; k++)
                {
                    if ((b[k].second - b[j].second) == 2 || (b[k].second - b[j].second) == 4)
                    {

                        p--;
                    }
                }
                j++;
            }
            ans += p;
            i++;
        }
        cout << ans << endl;
    }

    return 0;
}