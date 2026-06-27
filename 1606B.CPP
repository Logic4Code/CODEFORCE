#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
    cin >> n >> k;
    
    if (n == 1) {
        cout << 0 << endl;
    }
    
    else if (k == 1) {
        cout << n - 1 << endl;
    }
else {   
    long long x = 1;
    long long ans = 0;
    
    while (x < k && x < n) {
        x *= 2;
        ans++;
    }
    
    if (x < n) {
        long long y = n - x;
        ans += (y + k - 1) / k;
    }
    
    cout << ans << endl;
}
}
}