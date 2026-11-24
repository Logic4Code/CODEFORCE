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
        string s;
        cin >> s;
        int i = 0, j = n - 1;
        vector<pair<int, int>> a;
        while (i < j)
        {
            if (s[i] != s[j])
            {
                a.push_back({max(s[i] - 'a', s[j] - 'a'), min(s[i] - 'a', s[j] - 'a')});
            }
            i++;
            j--;
        }
        int ans = 0;
        if (a.size() != 0)
        {

            sort(a.rbegin(), a.rend());
            int k = a[0].first;

            for (int i = 0; i < a.size(); i++)
            {
                ans += max(0,min(k, a[i].first) - a[i].second);
                k = min(k, a[i].second);
            }
        }
        cout << ans << endl;
    }
    return 0;
}