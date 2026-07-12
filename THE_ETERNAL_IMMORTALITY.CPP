#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b;
    cin >> a >> b;
    long long ans = 1;
    if (b - a >= 5) {
            cout << 0 << "\n";
        } else {
    for (long long i = a + 1; i <= b; i++)
    {
        ans = (ans * (i % 10)) % 10;
    }
    cout << ans;
}
}