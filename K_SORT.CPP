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
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long x = 0;
    long long y = 0;
    long long m = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] > m) {
            m = a[i]; 
        } else {
            long long p = m - a[i];
            x += p;
            y = max(y, p);
        }
    }
    cout << x + y << endl;
}
}