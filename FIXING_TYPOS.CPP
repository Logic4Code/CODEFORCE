#include <bits/stdc++.h>
using namespace std;
int main(){
string s;
    cin >> s;

   string ans = "";
    
    for (char c : s) {
        int n = ans.length();

        if (n >= 2 && ans[n - 1] == c && ans[n - 2] == c) {
            continue;
        }

        if (n >= 3 && ans[n - 1] == c && ans[n - 2] == ans[n - 3]) {
            continue;
        }

        ans.push_back(c);
    }

   cout << ans ;
}