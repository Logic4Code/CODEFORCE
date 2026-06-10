#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>> t;
    while(t--){
int n;
    cin >> n;
    vector<long long> b(n);
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }
    sort(b.rbegin(), b.rend());

    bool ans = true;
    for (int i = 2; i < n; ++i) {
        if (b[i] != b[i - 2] % b[i - 1]) {
            ans = false;
            break;
        }
    }

    if (ans) {
        cout << b[0] << " " << b[1] <<endl;
    } else {
        cout << -1 <<endl;
    }
}
}