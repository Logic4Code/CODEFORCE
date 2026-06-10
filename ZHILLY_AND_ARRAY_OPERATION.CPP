#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s = 0;
        cin >> n;
        vector<long long> d(n);
        for (int i = 0; i < n; i++)
        {
            cin >> d[i];
        }

        int ans = 0;
        long long a = 0;

        for (int i = n - 1; i >= 0; i--) {
            long long b = d[i] + a;

            if (b > 0) {
                ans++;
                a = b;
            } else {
                a = 0;
            }
        }
        cout << ans << endl;
    }
    }
