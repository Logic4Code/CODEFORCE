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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        long long ans=0,k=0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
               if(a[j]%a[i]==0) ans++;
               k=max(ans,k);
            }
            ans=0;
        }
        cout<<n-k<<endl;
    }
    return 0;
}