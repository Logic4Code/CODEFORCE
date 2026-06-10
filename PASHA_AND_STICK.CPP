#include <bits/stdc++.h>
using namespace std;
int main()
{
long long n;
    cin >> n;
        if (n % 2 != 0) {
            cout << 0 ;
        } else {
            long long ans = n / 2;
            long long ans2 = (ans-1 ) / 2;
            cout << ans2 ;
        }
}
