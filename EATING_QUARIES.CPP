#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
int n, q;
    cin >> n >> q;
    
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    sort(a.rbegin(), a.rend());
    
    for (int i = 1; i < n; i++) {
        a[i] += a[i - 1];
    }
    while (q--) {
        long long x;
        cin >> x;
        int l = 0;
        int r = n - 1;
        int ans = -1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (a[mid] == x) {
                ans = mid + 1; 
                break;         
            } 
            else if (a[mid] > x) {
                ans = mid + 1; 
                r = mid - 1; 
            } 
            else { 
                l = mid + 1;  
            }
        }
        
        cout << ans << endl;
    }
}
}