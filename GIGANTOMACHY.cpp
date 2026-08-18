#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
   int n, m;
    cin >> n >> m;

    vector<long long> a(n), b(m);
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < m; ++i) cin >> b[i];
    long long s1 = 0;
        for (int i = 0; i < n- 1; ++i) {
        s1 += (a[i] - a[i + 1] + 1);
    }
    
    s1 += a[n - 1];
    long long s2 = 0;
        for (int i = 0; i < m- 1; ++i) {
        s2 += (b[i] - b[i + 1] + 1);
    }
    
    s2 += b[m - 1];
    if (s1 >= s2) {
        cout << "1"<<"\n";
    } else {
        cout << "2"<<"\n";
    }
        
    }
    return 0;
}