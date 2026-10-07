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
        vector<long long> a(n);
        vector<long long> o;
        vector<long long> e;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
                e.push_back(a[i]);
            else
                o.push_back(a[i]);
        }
        if (o.empty())
        {
            for (int i = 0; i < n; i++)
            {
                cout << 0 << " ";
            }
            cout << endl;
        }
        else
        {
            sort(o.rbegin(), o.rend());
            sort(e.rbegin(), e.rend());
            vector<long long> pre(e.size() + 1, 0);
            for (int i = 0; i < e.size(); i++)
            {
                pre[i + 1] = pre[i] + e[i];
            }
            int p=e.size();
            int q=o.size();
            for (int i = 1; i <= n; i++)
            {
                int x = i - 1;

                if (x <= p)
                {
                    cout << o[0] + pre[x] << " ";
                }
                else
                {
                    int y = i -p;
                    int z = (y % 2 != 0) ? y : y + 1;

                    if (z <= q&& z <= i)
                    {
                        cout << o[0] + pre[i - z] << " ";
                    }
                    else
                    {
                        cout << 0 << " ";
                    }
                }
            }
            cout<<endl;
        }
    }
}