
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    map<int, int> hc;
    for (int i = 0; i < n; ++i) {
        cin >> a[i].first >> a[i].second;
        hc[a[i].first]++;
    }
    for (int i = 0; i < n; ++i) {
        int same = hc[a[i].second];
        int ans1 = (n - 1) + same;
        int ans2 = (n - 1) - same;
        cout << ans1 << " " << ans2 <<endl;
    }
}