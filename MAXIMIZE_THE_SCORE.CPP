#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll f(ll ind, vector<ll> &k, vector<ll>&dp,vector<vector<ll>>&l)
{
   
    if (ind >= (k.size()))
    {
        return 0;
    }
    if (dp[ind] != -1)
    {
        return dp[ind];
    }
    ll nt=1+f(ind+1,k,dp,l);
    ll t=-1e9;
    if(l[k[ind]][0]==ind){
       
      t=((l[k[ind]][1]-l[k[ind]][0]+1)*(l[k[ind]][1]-l[k[ind]][0]+1))+f(l[k[ind]][1]+1,k,dp,l);
      
    }
    return dp[ind]=max(t,nt);
}
int main()
{
    ll n;
    cin >> n;
    while (n--)
    {
        ll a;
        cin >> a;
        vector<ll> k(2 * a);
        vector<vector<ll>>l(a+1);
        for (ll i = 0; i < 2 * a; i++)
        {
            cin >> k[i];
         l[k[i]].push_back(i);
        }

        vector<ll> dp((2 * a),-1);
       
        cout << f(0, k,dp,l) << endl;

    }
}