#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
    string s;
    cin>>s;
    unordered_set<char> x;
    for (char c : s) {
        x.insert(c);
    }
    
    int k = x.size();
    bool ans=true;
    for (int i = k; i < s.length(); i++) {
        if (s[i] != s[i - k]) {
            ans= false;
        }
    }
    if(ans) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
    return 0;
}