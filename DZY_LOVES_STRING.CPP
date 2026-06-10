#include <bits/stdc++.h>
using namespace std;
int main()
{
string s;
    cin >> s;

    int k;
    cin >> k;

    vector<int> a(26);
    int maxi = 0;
    for (int i = 0; i < 26; i++) {
        cin >> a[i];
        maxi = max(maxi, a[i]);
    }

    long long ans = 0;
    int n = s.length();

    for (int i = 0; i < n; i++) {
        ans += (long long)a[s[i] - 'a'] * (i + 1); 
    }
    for (int i = n + 1; i <= n + k; i++) {
        ans += (long long)maxi * i;
    }
    cout << ans;
}