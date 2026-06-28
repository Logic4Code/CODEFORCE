#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
int n;
    cin >> n;

    int c0 = 0;
    int c1 = 0;
    int c2 = 0;

    for (int i = 0; i < n; ++i) {
        long long x;
        cin >> x;
        
        if (x % 3 == 0) {
            c0++;
        } else if (x % 3 == 1) {
            c1++;
        } else {
            c2++;
        }
    }

    int ans = c0;

    int p = min(c1, c2);
    ans += p;

    c1 -= p;
    c2 -= p;

    ans += c1 / 3;
    ans += c2 / 3;

    cout << ans << endl;
}
}