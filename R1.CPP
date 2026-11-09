#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
     int n;
    long long k;
     cin >> n >> k;

    int p = 0, q = 0;

    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        if (abs(x) % 2 != 0) {
            p++;
        }
    }

    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        if (abs(x) % 2 != 0) {
            q++;
        }
    }
    if(k%2==0 && p >= q) cout << "YES"<<endl;
    else if(k%2==1 && p <= q) cout << "YES"<<endl;
    else cout << "NO"<<endl;
    }
    return 0;
}