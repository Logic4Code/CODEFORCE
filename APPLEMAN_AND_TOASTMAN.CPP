#include <bits/stdc++.h>
using namespace std;

int main()
{
int n;
    cin >> n;

    vector<long long> a(n);
    long long s = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        s += a[i];
    }

    sort(a.begin(), a.end());

    long long ans = s;

    for (int i = 0; i < n - 1; ++i) {
        ans += s;
        s -= a[i]; 
    }

    cout << ans ;
}