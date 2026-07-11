#include <bits/stdc++.h>
using namespace std;

int main() {
int n, m;
    cin >> n >> m;
    vector<int> winners(n, 0);
    for (int i = 0; i < m; ++i) {
        int x = -1;
        int y = -1;
        for (int j = 0; j < n; ++j) {
            int b;
            cin >> b;
            if (b > x) {
                x = b;
                y = j;
            }
        }
        winners[y]++;
    }
    int maxi = -1;
    int ans = -1;
    for (int j = 0; j < n; ++j) {
        if (winners[j] > maxi) {
            maxi = winners[j];
            ans = j;
        }
    }
    cout << ans + 1 ;
}