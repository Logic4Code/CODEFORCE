#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int x, y;
    cin >> x >> y;
    vector<int> a(x);
    for(int i=0; i<x; i++) {
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    long long ans = 0;
    for(int i=0; i<y; i++)
    {
        if (a[i]<0)
        {
            ans += abs(a[i]);
        }
    }
    cout << ans << endl;
}
