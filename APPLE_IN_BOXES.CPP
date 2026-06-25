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
        cin >> n >> k;

        long long s = 0;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            s += a[i];
        }
        sort(a.begin(), a.end());
        a[n - 1]--;
        sort(a.begin(), a.end());

        if (a[n - 1] - a[0] > k || s % 2 == 0)
        {
            cout << "Jerry" << endl;
            continue;
        }
        cout << "Tom" << endl;
    }
}