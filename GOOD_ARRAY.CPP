#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<pair<long long, int>> a(n);
    long long s = 0;

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i].first;
        a[i].second = i + 1;
        s += a[i].first;
    }

    sort(a.begin(), a.end());

    vector<int> ans;

    for (int i = 0; i < n; ++i)
    {
        long long r = s - a[i].first;

        if (i < n - 1)
        {
            if (r == 2 * a[n - 1].first)
            {
                ans.push_back(a[i].second);
            }
        }
        else
        {
            if (r == 2 * a[n - 2].first)
            {
                ans.push_back(a[i].second);
            }
        }
    }
    
        cout << ans.size() << endl;
        for (int i = 0; i < ans.size(); ++i)
        {
            cout << ans[i] << " ";
        }
}