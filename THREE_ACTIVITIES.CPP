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
    vector<pair<int,int>> a(n),b(n),c(n);
    for(int i=0; i<n; i++)
    {
       cin >> a[i].first;
        a[i].second=i;
    }
    for(int i=0; i<n; i++)
    {
       cin >> b[i].first;
        b[i].second=i;
    }
    for(int i=0; i<n; i++)
    {
       cin >> c[i].first;
        c[i].second=i;
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    sort(c.begin(),c.end());
    int ans = INT_MIN;
    for(int i=n-1; i>n-4; i--)
    {
        for(int j=n-1; j>n-4; j--)
        {
            for(int k=n-1; k>n-4; k--)
            {
                if (a[i].second!=b[j].second && b[j].second!=c[k].second && a[i].second!=c[k].second)
                {
                    int sum = a[i].first + b[j].first + c[k].first;
                    ans = max(ans,sum);
                }
            }
        }
    }
    cout << ans << endl;
 
}
}