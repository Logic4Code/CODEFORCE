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
    
    long long s = 0;
    long long mini = INT_MAX;
    int nn = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] < 0) {
            nn++;
        }
        s += abs(a[i]);
        mini = min(mini, abs(a[i]));
    }

    if (nn % 2 != 0) {
        s -= 2 * mini;
    }

    cout << s <<endl;
}
    }

