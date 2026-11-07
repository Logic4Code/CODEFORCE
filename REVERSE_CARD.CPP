#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int ans = 0;
        for (int b = 1; b <= m; b++)
        {
            for (int a = b; a <= n; a += b)
            {
                if ((a / b + 1) % b == 0)
                    ans++;
            }
        }
        cout << ans << endl;
    }
}