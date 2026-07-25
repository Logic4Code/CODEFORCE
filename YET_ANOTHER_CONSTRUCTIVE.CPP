#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
long long n, k, m;
    cin >> n >> k >> m;

    if (m < k) {
        cout << "NO"<<endl;
    }
else{
    cout << "YES"<<endl;
    for (int i = 1; i <= n; ++i) {
        if (i % k == 0) {
            cout << m - k + 1 << " ";
        } else {
            cout << 1 << " ";
        }
    }
    cout << endl;
}
}
}