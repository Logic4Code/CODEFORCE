#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long k;
        cin >> n;
        string s;
        cin >> s;
        vector<bool> seen(26, false);
        int c = 0;
        long long ans = 0;

        for (int i = 0; i < n; ++i)
        {
            if (!seen[s[i] - 'a'])
            {
                seen[s[i] - 'a'] = true;
                c++;
            }
            ans += c;
        }
        cout << ans << "\n";
    }
}