 #include <bits/stdc++.h>
using namespace std;

int main()
{
    
    int t;
    cin >> t;
    while (t--)
    {
long long n;
    cin >> n;

    long long ans = 0;

    for (long long i = 1; i <= n/2; i++) {
        ans += 8 * i * i;
    }

    cout << ans <<endl;
}
}