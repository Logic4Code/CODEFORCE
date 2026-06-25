#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
int n;
    long long x;
    cin >> n >> x;

    vector<pair<long long, long long>> ans(n);
    long long s = 0;

    for (int i = 0; i < n; ++i) {
        cin >> ans[i].first;
        ans[i].second = 1;
        s += ans[i].first; 
    }

    for (int i = 0; i < ans.size(); ++i) {
        long long p = ans[i].first;
        long long c = ans[i].second;

        if (p % x == 0) {
            ans.push_back({p / x, c * x});
            s += (p / x) * (c * x);
        } else {
            break;
        }
    }

    cout << s << endl;
}
}
