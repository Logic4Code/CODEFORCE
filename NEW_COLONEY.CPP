#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
    int n;
    long long k;
    cin >> n >> k;
    
    vector<int> h(n);
    for (int i = 0; i < n; ++i) {
        cin >> h[i];
    }
    
    if (is_sorted(h.begin(), h.end(), greater<int>())) {
        cout << -1 << endl;
    }
else{
    for (int j = 1; j <= k; ++j) {
        int i = 0;
        while (i < n - 1 && h[i] >= h[i + 1]) {
            i++;
        }
        
        if (i == n - 1) {
            cout << -1 << endl;
            break;
        }
        
        h[i]++;
        
        if (j == k) {
            cout << i + 1 << endl;
            break;
        }
    }
}
}
}