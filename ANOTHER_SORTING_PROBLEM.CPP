#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int k = 0;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i+1]) {
            k = max(k, a[i] - a[i+1]);
        }
    }
    if (k == 0) {
        cout << "YES\n";
    }
    else{
    int elem = a[n-1] + k; 
    bool ans = true;

    for (int i = n - 1; i >= 0; i--) {
        int x = a[i] + k;
        int y = a[i];

        if (x <= elem) {
            elem = x;
        } else if (y <= elem) {
            elem = y;
        } else {
            ans = false;
            break;
        }
    }
    if (ans) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}
    }
}