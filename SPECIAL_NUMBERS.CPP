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
    
    long long MOD = 1e9 + 7;
    long long ans = 0;
    long long p = 1; 
    
    while (k > 0) {
        if (k & 1) {
            ans = (ans + p) % MOD;
        }
        
        p = (p * n) % MOD;
        
        k >>= 1;
    }
    
    cout << ans << endl;
}
}