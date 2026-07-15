#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        string s;
cin >> s;
    int maxi = 0;
    int x = 0;
    for (char c : s) {
        if (c == '#') {
            x++;
        } else {
            maxi = max(maxi, x);
            x = 0;
        }
    }
    maxi = max(maxi, x);
    if (maxi == 0) {
        cout << 0 << endl;
    } else {
        cout << (maxi + 1) / 2 << endl;
    }
}
}