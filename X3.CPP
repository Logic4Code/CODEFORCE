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
      int x=0;
      int y=0;
      for (int i = 1; i < s.size()-1; i++) {
      if(s[i-1]==s[i+1] && s[i]==s[i+1])x++;
      if(s[i-1]==s[i+1] && s[i]!=s[i+1]) y++;
      }
        int ans=1;
        if(x>0) ans++;
        if(y>0) ans++;
        cout<<ans<<endl;
    }
    return 0;
}