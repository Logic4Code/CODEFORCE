#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
    string s;
    cin >> s;
    int n = s.size();

    if (is_sorted(s.rbegin(), s.rend())) {
        cout << s << "\n";
    }
else{
    for (int i = 1; i < n; ++i) {
        int j = i;
        while (j > 0 && s[j] > '0' && (s[j] - 1 > s[j - 1])) {
            s[j]--;
            swap(s[j], s[j - 1]);
            j--;
        }
    }

    cout << s << "\n"; 
    }
}
    return 0;
}