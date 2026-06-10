#include <bits/stdc++.h>
using namespace std;
int main()
{
int n, m;
  cin >> n >> m;
vector<string> ans(n);

    for (int i = 0; i < n; ++i) {
        cin >> ans[i]; 
        for (int j = 0; j < m; ++j) {
            if (ans[i][j] == '.') {
                if ((i + j) % 2 == 0) {
                    ans[i][j] = 'B';
                } else {
                    ans[i][j] = 'W';
                }
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        cout << ans[i] << "\n";
    }
}