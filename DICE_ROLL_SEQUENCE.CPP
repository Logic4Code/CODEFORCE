#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, c = 0;
        cin >> n;
        vector<long long> a(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (long long i = 0; i < n - 1; i++)
        {
            if (a[i] + a[i + 1] == 7 || a[i] == a[i + 1])
            {
                c++;
                i++;
            }
        }
        cout << c << endl;
    }
}
