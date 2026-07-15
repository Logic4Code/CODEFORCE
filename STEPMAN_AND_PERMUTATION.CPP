 #include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
int n, x, y;
   cin >> n >> x >> y;
    int g = __gcd(x, y);
    bool ans = true;
    for (int i = 1; i <= n; ++i) {
        int x;
        cin >> x;
        if (i % g != x % g) {
            ans = false;
        }
    }
    if (ans) {
        cout << "YES"<<endl;
    } else {
        cout << "NO"<<endl;
    }
}
}