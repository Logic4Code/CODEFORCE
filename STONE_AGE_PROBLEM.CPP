#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     int n,x;
     cin>>n>>x;
     long long s=0;
vector<int> lup(n, 0);
vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        s += a[i];
    }
    long long lv = 0;
    int va = 0;

    for (int i = 1; i <= x; i++) {
        int q;
        cin >> q;

        if (q == 1) {
            int c;
            long long b;
            cin >> c >> b;
            int idx = c - 1;
            long long cv = (lup[idx] < va) ? lv : a[idx];

            s = s - cv + b;
            a[idx] = b;
            lup[idx] = i;

            cout << s << "\n";
        } 
        else if (q == 2) {
            long long c;
            cin >> c;
            lv = c;
            va = i;
            s = 1LL * n * c;

            cout << s << "\n";
        }
    }
}