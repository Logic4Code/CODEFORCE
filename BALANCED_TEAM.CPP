#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, d;
    cin >> n ;
    vector<int> p(n);
    for (int i = 0; i < n; i++) cin >> p[i];
    sort(p.begin(), p.end());
    int ans = 0;
    int s = n - 1; 
    for (int e = n - 1; e >= 0; e--) {
        while (s >= 0 && p[e] - p[s] <= 5) {
            s--;
        }
        int b = e - s;
        
        ans = max(ans, b);
    }
    
    cout << ans << endl;
}