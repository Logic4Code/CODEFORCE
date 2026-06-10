#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, s;
        cin >> a >> s;
        int c = 0;
        vector<int> ans;

        while (s > 0)
        {
            int x = a % 10;
            int y = s % 10;

            if (y >= x)
            {
                ans.push_back(y - x);
                a /= 10;
                s /= 10;
            }
            else
            {
                s /= 10;
                int b = s % 10;

                if (b != 1)
                {
                    c++;
                    break;
                }
                int num = 10 + y;
                ans.push_back(num - x);
                a /= 10;
                s /= 10;
            }
        }
        if (a > 0 || c > 0)
        {
            cout << -1 << endl;
        }
        else
        {
            reverse(ans.begin(), ans.end());
            int i = 0;
            while (i < ans.size() && ans[i] == 0)
            {
                i++;
            }
            if (i == ans.size())
            {
                cout << 0 << "\n";
            }
            else
            {
                for (; i < ans.size(); i++)
                {
                    cout << ans[i];
                }
                cout << endl;
            }
        }
    }
}