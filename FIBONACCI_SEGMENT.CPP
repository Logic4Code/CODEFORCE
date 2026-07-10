#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if(n==1) cout<<1;
    else{
    int ans = 2;
    int x = 2;

    for (int i = 2; i < n; i++)
    {
        if (a[i] == a[i - 1] + a[i - 2])
        {
            x++;
        }
        else
        {
            ans = max(ans, x);
            x = 2;
        }
    }
    ans = max(ans, x);
    cout << ans;
}
}