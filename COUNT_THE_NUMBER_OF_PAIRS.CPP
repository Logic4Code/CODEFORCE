#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    vector<int> a(26, 0);
    vector<int> b(26, 0);

    for (char c : s) {
        if (isupper(c)) {
            b[c - 'A']++;
        } else {
            a[c - 'a']++;
        }
    }

    int ans = 0;

    for (int i = 0; i < 26; ++i) {
        ans += min(a[i], b[i]);
        int q = abs(a[i] - b[i])/ 2;
        int x = min(k, q);
        ans += x;
        k -= x; 
    }

    cout << ans << endl;
}
 }