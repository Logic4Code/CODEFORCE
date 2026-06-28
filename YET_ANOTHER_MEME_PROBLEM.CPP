#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
long long a, b;
    cin >> a >> b;

    long long c = 0;
    long long x = 9;

    while (x <= b) {
        c++;
        x = x * 10 + 9;
    }

    long long ans = a * c;
    cout << ans << endl;
}
}