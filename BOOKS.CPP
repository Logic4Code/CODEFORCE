#include <bits/stdc++.h>
using namespace std;
int main(){
int n,t;
    cin >> n >> t;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int ans = 0;
long long s = 0; 
for (int i = 0, j = 0; i < n; i++) {
    while (j < n && s + a[j] <= t) {
        s += a[j++];
    }
    ans = max(ans, j - i);
    s -= a[i];
}
cout<<ans;
}