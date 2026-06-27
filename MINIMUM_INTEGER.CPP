#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
long long l, r, d;
    cin >> l >> r >> d;
    
    if (d < l) {
        cout << d << endl;
    } 
    else {
        long long ans = (r / d + 1) * d;
        cout << ans << endl;
    }
}
}