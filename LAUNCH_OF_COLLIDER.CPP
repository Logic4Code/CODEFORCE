#include <bits/stdc++.h>
using namespace std;

int main()
{
int n;
    cin >> n;

    string d;
    cin >> d;

    vector<long long> x(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }

    long long ans = -1;

    for (int i = 0; i < n - 1; i++) {
        if (d[i] == 'R' && d[i + 1] == 'L') {
            long long t = (x[i + 1] - x[i]) / 2;
            
            if (ans == -1 || t < ans) {
                ans = t;
            }
        }
    }

    cout << ans ;
}