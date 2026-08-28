#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
    int n,p=0;
    cin >> n;
    string a, b;
    cin >> a >> b;

    vector<bool> valid(n, false);
    int s = 0;
    for (int i = 0; i < n; i++) {
        s += (a[i] == '1' ? 1 : -1);
        if (s == 0) {
            valid[i] = true;
        }
    }
    bool x = false;
        for (int i = n - 1; i >= 0; i--) {
        char y = a[i];
                if (x) {
            y = (y == '0' ? '1' : '0');
        }
        if (y != b[i]) {
            if (!valid[i]) {
                cout << "NO\n";
                p++;
                break;
            }
            x = !x;
        }
    }  
   if(p==0) cout << "YES\n";
        
    }
    return 0;
}