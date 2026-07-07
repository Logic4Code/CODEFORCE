#include <bits/stdc++.h>
using namespace std;

int main()
{
long long n;
    cin >> n;

    long long ans = 0;
    long long s = 1;
    long long digits = 1;

    while (s <= n) {
        long long e = s * 10 - 1;
        
        long long count = min(n, e) - s + 1;
        
        ans += count * digits;
        
        s *= 10;
        digits++;
    }

    cout << ans ;
}