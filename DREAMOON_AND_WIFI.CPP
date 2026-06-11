#include <bits/stdc++.h>
using namespace std;
int nCr(int n, int x) {
    if (x < 0 || x > n) return 0;
    int ans = 1;
    for (int i = 1; i <= x; i++) {
        ans = ans * (n - i + 1) / i;
    }
    return ans;
}

int main() {
    string s, p;
    cin >> s >> p;

    int a = 0;
    int b = 0;
    int qc = 0;

    for (char c : s) {
        if (c == '+') a++;
        else a--;
    }

    for (char c : p) {
        if (c == '+') b++;
        else if (c == '-') b--;
        else if (c == '?') qc++;
    }

    int d = a - b;

    if (abs(d) > qc || (qc + d) % 2 != 0) {
        cout << fixed << setprecision(9) << 0.0 ;
    } else {
        int pn = (qc + d) / 2;
        
        double num = nCr(qc, pn);
        double den = pow(2, qc);
        
        double ans = num / den;
        cout << fixed << setprecision(12) << ans ;
    }
}