#include <bits/stdc++.h>
using namespace std;
int x(int n) {
    if (n < 0) return 0; 
    if (n % 4 == 0) return n;
    if (n % 4 == 1) return 1;
    if (n % 4 == 2) return n + 1;
    return 0;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
    int a, b;
    cin >> a >> b;
    int p=x(a-1);
        int y = p ^ b;
    
    if (y == 0) {
        cout << a << "\n";
    } else if (y != a) {
        cout << a + 1 << "\n";
    } else {
        cout << a + 2 << "\n";
    }
    }
    return 0;
}