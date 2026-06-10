#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        long long n, x, y;
        cin >> n;
        vector<int> p(n);
        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
            a[i] = p[i] - i;
        }
        sort(a.begin(), a.end());
        long long s = 0;
        long long c = 1;

        for (int i = 1; i < n; i++)
        {
            if (a[i] == a[i - 1])
            {
                c++;
            }
            else
            {
                s += (c * (c - 1)) / 2;
                c = 1;
            }
        }
        s += (c * (c - 1)) / 2;

        cout << s << endl;
    }
}
