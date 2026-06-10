#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int even = 0, odd = 0;
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] % 2 == 0) even++;
            else odd++;
        }

        if (even % 2 == 0 && odd % 2 == 0) {
            cout << "YES" << "\n";
        } 
        else {
            sort(a.begin(), a.end());
            bool found = false;
            for (int i = 0; i < n - 1; i++) {
                if (a[i+1] - a[i] == 1) {
                    found = true;
                    break;
                }
            }
            
            if (found) cout << "YES" << "\n";
            else cout << "NO" << "\n";
        }
    }
    return 0;
}