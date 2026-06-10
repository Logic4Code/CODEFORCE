#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> d(n);
    for (int i = 0; i < n; i++)
    {
        cin >> d[i];
    }
    int ans = n;
    int a = 0;

    for (int i = 0; i < n; i++)
    {
        int b = (d[i] + x - 1) / x;

        if (b >= a)
        {
            a = b;
            ans = i + 1;
        }
    }

    cout << ans << endl;
}