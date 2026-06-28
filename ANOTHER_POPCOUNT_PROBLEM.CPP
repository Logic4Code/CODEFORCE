
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
    long long n, k;
    cin >> n >> k;
    
    long long ans = 0;
    
    for (int i = 0; ; ++i) {
        long long x = (long long)pow(2, i);
        long long c = k * x;
        
        if (n >= c) {
            n -= c;
            ans += k;
        } else {
            ans += (n / x);
            break; 
        }
    }
    
    cout << ans << endl;
}
}