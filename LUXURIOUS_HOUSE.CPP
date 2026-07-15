#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
    cin >> n;
    vector<int> h(n);
    for (int i = 0; i < n; ++i) {
        cin >> h[i];
    }
    vector<int> ans(n);
    int maxi = 0;
    for (int i = n - 1; i >= 0; --i) {
        if (h[i] > maxi) {
            ans[i] = 0;
        } else {
            ans[i] = (maxi + 1) - h[i];
        }
        maxi = max(maxi, h[i]);
    }

    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
}