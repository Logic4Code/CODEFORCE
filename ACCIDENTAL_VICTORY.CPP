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
        vector<pair<long long, int>> f(n);
        for (int i = 0; i < n; i++)
        {
            cin >> f[i].first;
            f[i].second = i + 1;
        }
        sort(f.begin(), f.end());
        vector<long long> pr(n);
        pr[0] = f[0].first;
        for (int i = 1; i < n; i++)
        {
            pr[i] = pr[i - 1] + f[i].first;
        }
        int k = n - 1;
        for (int i = n - 2; i >= 0; i--)
        {
            if (pr[i] < f[i + 1].first)
            {
                break;
            }
            k = i;
        }
        vector<int> ans;
        for (int i = k; i < n; i++)
        {
            ans.push_back(f[i].second);
        }
        sort(ans.begin(), ans.end());
        cout << ans.size() << "\n";
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
}