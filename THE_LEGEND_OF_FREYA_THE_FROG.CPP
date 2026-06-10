#include <bits/stdc++.h>
using namespace std;
int main()
{
      int t;
    cin >> t;
    while (t--)
    {
long long x, y, k;
    cin >> x >> y >> k;
    
    long long ax = (x + k - 1) / k;
    long long ay = (y + k - 1) / k;
    
    long long ans = max(2 * ax - 1, 2 * ay);
    
    cout << ans <<endl;
}
}