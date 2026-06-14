#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
    cin >> n;

    vector<pair<int, int>> p(n);
    for (int i = 0; i < n; ++i) {
        cin >> p[i].first >> p[i].second;
    }

    int ans = 0;

    for (int i = 0; i < n; ++i) {
        bool r = false;
        bool l = false;
        bool d = false;
        bool u = false;

        int cx = p[i].first;
        int cy = p[i].second;

        for (int j = 0; j < n; ++j) {
            if (i == j) continue; 

            int nx = p[j].first;
            int ny = p[j].second;

            if (ny == cy && nx > cx) r = true;
            if (ny == cy && nx < cx) l = true;
            if (nx == cx && ny < cy) d = true;
            if (nx == cx && ny > cy) u = true;
        }

        if (r && l && d && u) {
            ans++;
        }
    }
    cout << ans << endl;
}