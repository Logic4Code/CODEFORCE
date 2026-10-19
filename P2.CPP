#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
     int n;
    cin >> n;
    string s;
    cin >> s;

    int o = 0;
    int k,j;
    for (int i=0;i<n;i++) {
        if (s[i] == '1') {
            o++;
        }
    }
    for (int i=0;i<n;i++) {
        if (s[i] == '1') {
          k=i;
          break;
        }
    }
        for (int i=n-1;i>=0;i--) {
        if (s[i] == '1') {
            j=i;
            break;
        }
    }
    if (o <= 2) {
        cout << o-1 << endl;
    }
   
    else if (o == n) {
        cout << n - 1 << endl;
   }
    else{
         cout<<j-k<<endl;
    }
    }
    return 0;
}