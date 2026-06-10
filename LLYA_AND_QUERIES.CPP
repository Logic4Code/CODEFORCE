#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin >> a;
    int x = a.length();
    vector<int> ans(x + 1, 0);
    for (int i = 1; i < x; i++) {
        ans[i] = ans[i - 1];
        if (a[i] == a[i - 1]) {
            ans[i]++;
        }
    }
    int  n;
    cin >> n;
    vector<pair<int, int>> d(n);
    for (int i = 0; i < n; i++)
    {
        cin >> d[i].first >> d[i].second;
    }
   for(int i = 0; i < n; i++) {
        cout << ans[d[i].second - 1] - ans[d[i].first - 1] << "\n";
    }
    }
