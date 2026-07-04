#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
int ans[256] = {0}; 
    for (int i = 0; i < 3; i++) {
        string s;
        cin >> s;
        if (s[1] == '>') ans[s[0]]++; 
        else             ans[s[2]]++; 
    }
    char l = 0, m = 0, r = 0;

    for (char c : {'A', 'B', 'C'}) {
        if (ans[c] == 0) l = c;
        if (ans[c] == 1) m = c;
        if (ans[c] == 2) r = c;
    }

    if (l && m && r) {
        cout << l << m << r << "\n";
    } else {
        cout << "Impossible"<< "\n";
    }
}