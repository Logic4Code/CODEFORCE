#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    while (n--)
    {
        ll a, b;
        cin >> a >> b;
        vector<ll> k(a), l(a + 2, 0);
        for (ll i = 0; i < a; i++)
        {
            cin >> k[i];
        }
        ll st = 0, sum = 0, suma = 0;
        vector<ll> ans;
        for (ll i = 0; i < a; i++)
        {
            if (i == 0)
            {
                ans.push_back((suma+k[a - i - 1])%2);
                suma = (suma + ans[ans.size() - 1])%2;
            }
            else if (i <= b)
            {
                ans.push_back((suma + k[a - i - 1])%2);
                suma = abs((suma + ans[ans.size() - 1])%2);
            }
            else
            {

                suma = abs((suma - ans[(i-b) - 1])%2);
                ans.push_back(abs((suma + k[a - i - 1])%2));
                 suma = abs((suma + ans[ans.size() - 1])%2);
            }

        }
        ll ap=-1;
      
        for (ll i = 0; i < a; i++)
        {
          if(i==0){
           if(ans[i]%2==1){
            ap=1;
           }
           else{
            ap=0;
           }
          }
          else{
            if(ap==1&&ans[i]%2==1){
                ap=0;
            }
            else if(ap==0&&ans[i]%2==1){
                ap=1;
            }
            else if(ap==1&&ans[i]%2==0){
                ap=1;
            }
            else if(ap==0&&ans[i]%2==0){
                ap=0;
            }
          }
         
        }
       if(ap==0){
        cout<<"Bob"<<endl;
       }
       else{
        cout<<"Alice"<<endl;
       }
    }
    return 0;
}