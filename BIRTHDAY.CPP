#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    vector<int> ans(n);
    int l = 0;
    int r = n - 1;

    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            ans[l] = a[i];
            l++;
        } else {
            ans[r] = a[i];
            r--;
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << ans[i] << " ";
    }
}