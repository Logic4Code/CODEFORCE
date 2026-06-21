#include <bits/stdc++.h>
using namespace std;

int main()
{
int n, v;
    cin >> n >> v;

    vector<int> ans;

    for (int i = 1; i <= n; i++) {
        int k;
        cin >> k;
        bool t = false;
        
        for (int j = 0; j < k; j++) {
            int price;
            cin >> price;
            if (v > price) {
                t = true;
            }
        }
        
        if (t) {
            ans.push_back(i);
        }
    }

    cout << ans.size() << endl;

    for ( int i = 0; i < ans.size(); i++) {
        cout << ans[i] <<" ";
    }
}