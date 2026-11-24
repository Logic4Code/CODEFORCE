#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
     int n;
    cin >> n;

    vector<long long> x(n + 2), y(n + 2);
    for (int i = 1; i <= n; i++) {
        cin >> x[i] >> y[i];
    }

    if (n == 1) {
        cout << 1 << "\n";
    }
else{
    vector<long long> pmx(n + 2,2e9), smx(n + 2, 2e9);
    vector<long long> pmax(n + 2, -1), smax(n + 2, -1);
    vector<long long> pmy(n + 2, 2e9), smy(n + 2, 2e9);
    vector<long long> pmay(n + 2, -1), smay(n + 2, -1);

    for (int i = 1; i <= n; i++) {
        pmx[i] = min(pmx[i - 1], x[i]);
        pmax[i] = max(pmax[i - 1], x[i]);
        pmy[i] = min(pmy[i - 1], y[i]);
        pmay[i] = max(pmay[i - 1], y[i]);
    }

    for (int i = n; i >= 1; i--) {
        smx[i] = min(smx[i + 1], x[i]);
        smax[i] = max(smax[i + 1], x[i]);
        smy[i] = min(smy[i + 1], y[i]);
        smay[i] = max(smay[i + 1], y[i]);
    }

    long long ans = (pmax[n] - pmx[n] + 1) * (pmay[n] - pmy[n] + 1);

    for (int i = 1; i <= n; i++) {
        long long minix = min(pmx[i - 1], smx[i + 1]);
        long long maxix = max(pmax[i - 1], smax[i + 1]);
        long long miniy = min(pmy[i - 1], smy[i + 1]);
        long long maxiy = max(pmay[i - 1], smay[i + 1]);

        long long w = maxix - minix + 1;
        long long h = maxiy - miniy + 1;
        long long area = w * h;

        if (area == n - 1) area += min(w, h);
        ans = min(ans, area);
    }

    cout << ans << "\n"; 
}
    }
    return 0;
}