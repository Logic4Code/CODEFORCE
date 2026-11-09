#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
    int n;
    cin >> n;
      cout << "? 1 " << n << endl;
        int x;
        cin >> x;
        if (x == -1) exit(0);
    if (x == 0 || x == n) {
        cout << "! NO" << endl;
        cout.flush();
    }
    else{
        cout << "? " << x + 1 << " " << n << endl;
        int y;
        cin >> y;
        if (y == -1) exit(0);
        else if(y>0) cout << "! YES" << endl;
        else cout << "! NO" << endl;
    }
        cout.flush();
    }
}