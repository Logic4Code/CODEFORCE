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
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        bool ans = false;
        long long k = 2;
        set<long long> s;
        while (true)
        {
            for (int i = 0; i < n; i++)
            {
                s.insert(a[i] % k);
            }
            if (s.size() == 2)
            {
                ans = true;
                break;
            }
            else
                s.clear();
            k *= 2;
        }
        cout << k << endl;
    }
    return 0;
}