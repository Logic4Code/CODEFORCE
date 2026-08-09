#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        string s;
        cin>>s;
      for (int i = 1; i < s.size(); i++) {
        
        if (s[i] == s[i - 1]) {
            if (i + 1 == s.size()|| s[i] != s[i + 1]) {
                if (s[i - 1] != 'a' && (i + 1 == s.size() || s[i + 1] != 'a')) s[i] = 'a';
                else if (s[i - 1] != 'b' && (i + 1 == s.size() || s[i + 1] != 'b')) s[i] = 'b';
                else s[i] = 'c';
            } 
            else {
                if (s[i - 1] != 'a') s[i] = 'a';
                else s[i] = 'b';
            }
        }
        }
      cout<<s<<endl;
    return 0;
}