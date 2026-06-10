#include <bits/stdc++.h>
using namespace std;
int main()
{
    int z;
    cin >> z;
    while (z--)
    {
int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int ans = 0;
    int b = a[n - 1];

    for (int i = n - 2; i >= 0; --i) {
        if (a[i] > b) {
            ans++;
        } else {
            b = a[i];
        }
    }

    cout << ans <<endl;
}
}
