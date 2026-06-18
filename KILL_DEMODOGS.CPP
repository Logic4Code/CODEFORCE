#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
    const long long x = 1e9 + 7;
long long n;
    cin >> n;
    long long a = n ;
    long long b = (n + 1) ;
    long long c = (4 * n - 1) ;

    long long ans = 337;
    ans = (ans * a)%x ;
    ans = (ans * b)%x ;
    ans = (ans * c)%x ;
    
    cout << ans << endl;
}
}