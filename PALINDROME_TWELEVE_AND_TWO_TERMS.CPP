#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t, n, a, b, r;
    cin >> t;
    
    while (t--) {
        cin >> n;
        
        if (n == 10) {
            cout << -1 << "\n";
        } else {
            r = n % 12;
            
            if (r == 10) {
                a = 22;
            } else if (r == 11) {
                a = 11;
            } else {
                a = r;
            }
            
            b = n - a;
            
            cout << a << " " << b << "\n";
        }
    }
    
    return 0;
}