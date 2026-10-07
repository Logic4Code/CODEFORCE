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
      vector<long long> a(3);
      for (int i = 0; i < 3; i++) {
      cin >> a[i];
      }
      cout<<n-min({a[0],a[1],a[2]})<<endl;
    }
    return 0;
}