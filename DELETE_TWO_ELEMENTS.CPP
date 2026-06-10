#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> a(n);
        long long sum = 0;
        unordered_map<long long, long long> freq;

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            sum += a[i];
            freq[a[i]]++;
        }
        if ((2 * sum) % n != 0)
        {
            cout << 0 << "\n";
        }
        else
        {
            long long sum2 = (2 * sum) / n;
            long long ans = 0;

            for (auto const &pair : freq)
            {
                long long a = pair.first;
                long long count = pair.second;
                long long b = sum2 - a;

                if (a < b)
                {
                    if (freq.count(b))
                    {
                        ans += count * freq[b];
                    }
                }
                else if (a == b)
                {
                    ans += (count * (count - 1)) / 2;
                }
            }

            cout << ans << "\n";
        }
    }
}
