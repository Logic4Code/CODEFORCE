#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
int n;
    cin >> n;
    vector<long long> d(n);
    for (int i = 0; i < n; i++) {
        cin >> d[i];
    }

    int l = 0;
    int r = n - 1;
    
    long long s1 = 0;
    long long s3 = 0;
    long long ans = 0;

    while (l <= r) {
        if (s1 < s3) {
            s1 += d[l];
            l++;
        } else if (s3 < s1) {
            s3 += d[r];
            r--;
        } else {
            ans = s1;
            s1 += d[l];
            l++;
        }
    }

    if (s1 == s3) {
        ans = s1;
    }

    cout << ans ;
}