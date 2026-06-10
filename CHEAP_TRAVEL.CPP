#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    int x = n * a;

    int y = (n / m) * b + (n % m) * a;

    int z = ((n + m - 1) / m) * b;
    int ans = min({x, y,z});
    cout << ans;
}