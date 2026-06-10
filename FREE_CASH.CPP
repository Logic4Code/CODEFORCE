#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
    cin >> n;

    map<int, int> time;

    for (int i = 0; i < n; ++i) {
        int h, m;
        cin >> h >> m;
        int minu = h * 60 + m;
        time[minu]++;
    }
    int ans = 0;
   for (auto const& p : time) {
        if (p.second > ans) {
           ans = p.second;
        }
    }

    cout << ans <<endl;
}
