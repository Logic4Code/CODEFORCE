#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     string s;
     cin>>s;
     int n=s.size();
      bool x=false;
      int ans=0;
      for (char c : s) {
            if (c == '0' || c == '8') {
                x = true;
                ans=c-'0';
                break;
            }
        }
        if(x){
            cout<<"YES"<<endl;
            cout<<ans;
        }
        else{
for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int z = (s[i] - '0') * 10 + (s[j] - '0');
                if (z % 8 == 0) {
                    cout << "YES\n" << z<< "\n";
                    x = true;
                    break;
                }
            }
            if(x) break;
        }
if(!x){
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                for (int k = j + 1; k < n; k++) {
                    int y = (s[i] - '0') * 100 + (s[j] - '0') * 10 + (s[k] - '0');
                    if (y % 8 == 0) {
                        cout << "YES\n" << y << "\n";
                        x = true;
                        break;
                    }
                }
                if(x) break;
            }
          if(x) break;
        }
    }
        if(!x) cout<<"NO";
        }
}