#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll a;
        cin >> a;
        vector<ll> k(a), l;
        for (ll i = 0; i < a; i++)
        {
            cin >> k[i];
        }
        ll m = 0;
        ll v = -1;
        if (a == 1)
        {
            cout << 1 << endl;
        }
        else if (a == 2)
        {
            if (k[0] == k[1])
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 2 << endl;
            }
        }
        else
        {
            vector<pair<ll, ll>> p;
            ll count = 1;
            for (ll i = 0; i < a - 1; i++)
            {
                if (k[i] == k[i + 1])
                {
                    count++;
                }
                else
                {
                    p.push_back({k[i], count});
                    count = 1;
                }
            }
            p.push_back({k[a - 1], count});
            for (int i = 0; i < p.size(); i++)
            {
              if(p[i].second>=2){
                p[i].second=2;
              }
            }
            
            ll ans = 0;
            for (ll i = 0; i < a - 1; i++)
            {
                if (k[i] != k[i + 1])
                {
                    ans++;
                }
            }
            ans++;
            bool v1 = true, v2 = true, v3 = true;
            for (ll i = 0; i < p.size() - 1; i++)
            {
                if (p[i].second == 2 && p[i + 1].second == 2)
                {
                    v1 = false;
                }
                if (i < p.size() - 2 && p[i].second == 2 && p[i + 1].second == 1 && p[i].first != p[i + 2].first)
                {
                    v2 = false;
                }
                else if(p[i].second == 2 && p[i + 1].second == 1 && i==p.size()-2){
                    v2=false;
                }
            }
            reverse(p.begin(), p.end());
            for (ll i = 0; i < p.size() - 1; i++)
            {
                if (p[i].second == 2 && p[i + 1].second == 2)
                {
                    v1 = false;
                }
                if (i < p.size() - 2 && p[i].second == 2 && p[i + 1].second == 1 && p[i].first != p[i + 2].first)
                {
                    v2 = false;
                }
                else if(p[i].second == 2 && p[i + 1].second == 1 && i==p.size()-2){
                    v2=false;
                }
            }
            if(!v1){
                ans=ans+2;
            }
            else if(!v2){
                ans++;
            }
            cout<<ans<<endl;
        }
    }
}