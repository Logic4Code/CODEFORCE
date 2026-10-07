#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
     int n;
     cin>>n;
    char c;
     cin>>c;
     string s;
      cin>>s;
       int ans = 0;
    
    for (int i = 0; i < n / 2; ++i) {
        char a = s[i];
        char b = s[n - 1 - i];
        
        if (a == b) {
            continue;
        } else if (a == c || b == c) {
            ans += 1;
        } else {
            ans += 2;
        }
    }
    
     cout<< ans<<endl; 
    }
    return 0;
}