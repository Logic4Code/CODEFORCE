#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll n;
    cin >> n;
    while (n--)
    {
        ll a, b;
        cin >> a >> b;
        vector<ll> k1, k2;
        vector<pair<ll, ll>> k;
        ll m=a;
        while (m--)
        {
            ll l1, l2, l3;
            cin >> l1 >> l2 >> l3;
            if (l1 == l2 && l2 == l3)
            {
                k2.push_back(3 * l1);
                k.push_back({3 * l1, b});
            }
            else
            {
                if (l1 - l2 > 0 || l1 - l3 > 0 || l2 - l3 > 0)
                {
                    k.push_back({l1 + l2 + l3, 0});
                }
                else
                {
                    ll o = min(l2 - l1, min(l3 - l1, l3 - l2)) + 1;
                    k.push_back({l1 + l2 + l3, o});
                }
            }
        }
        sort(k.begin(), k.end());
        ll count = 1;
        ll ans = k[0].first;
        bool u = true;
        for (ll i = 0; i < k.size() - 1; i++)
        {
            b = b - (k[i].second*2);
            if (b >= 0)
            {
                ll v = k[i + 1].first - k[i].first;
                if (v * count <= b)
                {
                    ans = k[i + 1].first;
                    b=b-(v*count);
                    count++;
                    if(b<=0){
                        break;
                    }
                }
                else
                {
                    ans = k[i].first+(b/(i+1));
                    b=0;
                    break;
                }
            }
            if(b<=0){
                b=0;
                ans=k[i].first;
                break;
            }
        }
       
       if(b>0){
         b=b-(k[a-1].second*2);
         if(b>0){
            ans=k[a-1].first+(b/a);
         }
         
       }
       
       cout<<ans<<endl;
    }
}
