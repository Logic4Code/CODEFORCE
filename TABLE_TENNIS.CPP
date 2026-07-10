#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    long long k; 
    cin >> n >> k;
    vector<int> a(n);
    int maxi = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        maxi = max(maxi, a[i]);
    }
    bool b=false;
    int ans = a[0];
    int s = 0;
    for (int i = 1; i < n; i++) {
        if (ans > a[i]) {
            s++;
        } else {
            ans = a[i];
            s = 1; 
        }
        if (s == k) {
            b=true;
            cout << ans;
            break;
        }
    }
    if(!b)cout << ans;
}