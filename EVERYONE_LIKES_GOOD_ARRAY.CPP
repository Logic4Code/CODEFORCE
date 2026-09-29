#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        long long n; 
        cin >> n;
        long long a[n]; 
        for (long long i = 0; i < n; i++) 
            cin >> a[i];
        long long ans = 0;

        for (long long i = 0; i < n - 1; i++) 
        {
            if ((a[i] % 2) == (a[i + 1] % 2))
                ans++; 
        }
        cout << ans << endl; 
    }
    return 0;
}