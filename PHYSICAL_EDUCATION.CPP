#include <bits/stdc++.h>
using namespace std;
int main(){
   int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    vector<int> b(n);
    for (int i = 0; i < n; ++i) cin >> b[i];

    vector<pair<int, int>> ans;

    for (int i = 0; i < n; ++i) {
        if (b[i] != a[i]) {
            int k = -1;
            for (int j = i + 1; j < n; ++j) {
                if (b[j] == a[i]) {
                    k = j;
                    break;
                }
            }

            for (int j = k; j > i; --j) {
                swap(b[j], b[j - 1]);
                ans.push_back({j, j + 1}); 
            }
        }
    }

    cout << ans.size() <<endl;
  for (int i = 0; i < ans.size(); ++i) {
        cout << ans[i].first << " " << ans[i].second << endl;
    }
}
