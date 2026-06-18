#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
string s;
    cin >> s;
    int n = s.length();
    vector<bool> a(n, false);
    vector<int> l;
    vector<int> u;
    
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'b') {
            a[i] = true; 
            if (!l.empty()) {
                a[l.back()] = true;
                l.pop_back();
            }
        } 
        else if (s[i] == 'B') {
            a[i] = true;
            if (!u.empty()) {
                a[u.back()] = true;
                u.pop_back();
            }
        } 
        else {
            if (islower(s[i])) {
                l.push_back(i);
            } else {
                u.push_back(i);
            }
        }
    }
    
    string ans = "";
    for (int i = 0; i < n; ++i) {
        if (!a[i]) {
            ans += s[i];
        }
    }
    cout << ans <<endl;
}
}