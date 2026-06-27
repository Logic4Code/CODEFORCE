#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    long long ans = -1;

    int i = 0;
    while (i < n) {
        int j = i;
        while (j + 1 < n && a[j + 1] == a[i]) {
            j++;
        }

        long long c = (i + n - 1 - j) * a[i];

        if (ans == -1 || c < ans) {
            ans = c;
        }

        i = j + 1;
    }

    cout << ans << endl;
}
}