#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
   int n;
    cin >> n;
    map<int, int> num; 
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        num[x]++;
    }
    
  vector<int> ans;
    while (!num.empty()) {
        int maxi = num.rbegin()->first;
        ans.push_back(maxi);
        num[maxi]--;
        
        if (num[maxi] == 0) {
            num.erase(maxi);
        }
        
        for (auto it = num.begin(); it != num.end(); ) {
            if (it->first == maxi) {
                ++it;
                continue;
            }
            ans.push_back(it->first);
            it->second--;
            if (it->second == 0) {
                it = num.erase(it); 
            } else {
                ++it;
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << "\n";
}
}