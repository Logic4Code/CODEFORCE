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
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int ans = a[1];
    for (int i = 2; i < n; ++i) {
        ans = min(ans, a[i]);
    }
    if (a[0] > ans) {
        cout << "Alice"<<endl;
    } else {
        cout << "Bob"<<endl;
    }
}
}