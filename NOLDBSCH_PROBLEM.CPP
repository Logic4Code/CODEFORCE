#include <bits/stdc++.h>
using namespace std;
int main()
{
int n, k;
    cin >> n >> k;
        vector<bool> prim(n + 1, true);
        if (n >= 0) prim[0] = false;
        if (n >= 1) prim[1] = false;
        
        for (int p = 2; p * p <= n; p++) {
            if (prim[p]) {
                for (int i = p * p; i <= n; i += p) {
                    prim[i] = false;
                }
            }
        }       
        vector<int> ans;
        for (int i = 2; i <= n; i++) {
            if (prim[i]) {
                ans.push_back(i);
            }
        }
        
        int num = 0;
            for (size_t i = 0; i < ans.size() - 1; i++) {
                int sum = ans[i] + ans[i+1] + 1;
                
                if (sum > n) {
                    break;
                }
                
                if (prim[sum]) {
                    num++;
                }
            }
        
        if (num >= k) {
            cout << "YES";
        } else {
            cout << "NO";
        }
    }