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
        bool x = true;

        for (int i = 0; i < n; i++) {
            int j = i;

            while (j < n && a[j] > b[i]) {
                j++;
            }

            if (j == n) {
                x = false;
                break;
            }

            ans += (j - i);

            reverse(a.begin() + i, a.begin() + j + 1);
            reverse(a.begin() + i + 1, a.begin() + j + 1);
        }
      if(x) cout<<ans<<endl;
      else cout<<-1<<endl;
    }

    return 0;
}