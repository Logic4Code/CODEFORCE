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

    if (k >= n) {
        cout << 1 << endl;
    }
else{
    long long ans = 1;

    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            if (i <= k) {
                ans = max(ans, i);
            }
            
            if (n / i <= k) {
                ans = max(ans, n / i);
            }
        }
    }

    cout << n / ans << endl;
}
    }
}