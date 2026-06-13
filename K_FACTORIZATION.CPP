#include <bits/stdc++.h>
using namespace std;
int main()
{
int n, k;
   cin >> n >> k;

    vector<int> ans;
    
    for (int i = 2; i * i <= n && ans.size() < k - 1; ++i) {
        while (n % i == 0 && ans.size() < k - 1) {
            ans.push_back(i);
            n /= i;
        }
    }
    
    if (ans.size() == k - 1 && n > 1) {
        ans.push_back(n);
    }

    if (ans.size() == k) {
        for (int i = 0; i < k; ++i) {
            cout << ans[i] << (i == k - 1 ? "" : " ");
        }
    } else {
        cout << -1 ;
    }
}