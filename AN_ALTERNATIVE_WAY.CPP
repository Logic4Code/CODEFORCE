#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
    
    while (t--) {
int n;
    cin >> n;
    vector<long long> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    long long ans = 0;

    for (int i = n - 1; i > 0; i--) {
        a[i] += ans;
        if (a[i] > b[i]) {
            ans = a[i] - b[i]; 
            a[i] = b[i];
        } else {
            ans = 0;
        }
    }

    a[0] += ans;

    if (a[0] <= b[0]) {
        cout << "YES"<<'\n';
    } else {
        cout << "NO"<<'\n';
    }
}
}