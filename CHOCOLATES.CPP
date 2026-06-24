#include <bits/stdc++.h>
using namespace std;

int main()
{
int n;
    cin >> n;

    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    long long ans = 0;
    long long maxi = INT_MAX; 

    for (int i = n - 1; i >= 0; --i) {
        long long r = min(a[i], maxi - 1);
        
        if (r < 0) {
            r = 0;
        }

        ans += r;
        maxi = r; 
    }

    cout << ans ;
}