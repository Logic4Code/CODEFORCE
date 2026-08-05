#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a;
        cin >> a;
        vector<int> k(a), l;
        bool v = true;
        map<int, int> m, m1,m2;
        for (int i = 0; i < a; i++)
        {
            cin >> k[i];
            m[k[i]]++;
            m2[k[i]]++;
            if (k[i] == 0)
            {
                v = false;
            }
        }
        l = k;
        sort(l.begin(), l.end());
        l.erase(unique(l.begin(), l.end()), l.end());
        if (!v)
        {
           
            vector<pair<int, int>> p;
            for (auto &i : m)
            {
                p.push_back({i.first, i.second});
            }
            
            if (p.size() == 1)
            {
                for (int i = 0; i < a; i++)
                {
                    cout << 1 << " ";
                }
                cout << endl;
            }
            else
            {
               
                bool v = true;
               
                for (int i = 1; i < p.size(); i++)
                {
                    if ((p[i].first-p[i-1].first) % p[i - 1].second != 0)
                    {
                        v = false;
                        break;
                    }
                    else
                    {
                        m1[p[i - 1].first] = (p[i].first-p[i-1].first) / p[i - 1].second;
                    }
                }
                m1[l[l.size() - 1]] = m1[l[l.size() - 2]]+1;
                p.erase(p.begin(), p.end());
                for (auto &i : m1)
                {
                    p.push_back({i.first, i.second});
                }
                
               int ans=m2[p[0].first]*p[0].second;
               
                for (int i = 1; i < l.size(); i++)
                {
                    if (ans != p[i].first||p[i-1].second>=p[i].second)
                    {
                        v = false;
                        break;
                    }
                    
                    ans=ans+m2[p[i].first]*p[i].second;
                }
                if (!v)
                {
                    cout << -1 << endl;
                }
                else
                {
                    for (int i = 0; i < a; i++)
                    {
                        cout << m1[k[i]] << " ";
                    }
                    cout << endl;
                }
            }
           
        }
        else
        {
            cout << -1 << endl;
        }
    }
}