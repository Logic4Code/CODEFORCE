#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, x, y;
        long long a = 0;
        cin >> n >> x >> y;
        vector<int> p(n);
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
            a = a + p[i];
        }
        long long s = 0;

        for (int i = 0; i < n; ++i)
        {
            for (int j = i+1; j < n; ++j)
            {
                if (a - p[i] - p[j] >= x && a - p[i] - p[j] <= y)
                {
                    s++;
                }
            }
        }
        cout << s << endl;
    }
}
