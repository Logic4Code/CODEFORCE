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
        int z=0;
        map<int, int> f;
        vector<int> a(n), ans;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            f[a[i]]++;
        }
        for ( auto&b : f)
        {
           z++;
           ans.push_back(b.first);
          b.second--;
        }
    
        vector<pair<int,int>> x;
        for ( auto&b : f)
        {
            if (b.second>0)
            {
                x.push_back({b.first,b.second});
            }
        }
        sort(x.rbegin(), x.rend());
        for (int i = 0; i < x.size(); i++)
        {
            z++;
            while (x[i].second--)
            {
                ans.push_back(x[i].first);
            }
        }
        
        cout << z << endl;
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << ' ';
        }
        cout << endl;
    }
    return 0;
}