#include <bits/stdc++.h>
using namespace std;

int main()
{
int n, m;
    cin >> n >> m;
    vector<int> a(n);
    int maxi = 0;
    int s = 0;  
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        maxi = max(maxi, a[i]);
        s += a[i];
    }
    int x = (s + m + n - 1) / n;
    cout << max(maxi, x) << " " << maxi + m;
}