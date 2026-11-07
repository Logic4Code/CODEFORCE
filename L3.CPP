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
        int z = 0;
        int p=0;
        long long s = 0;
      vector<long long> a(n);
      for (int i = 0; i < n; i++) {
      cin >> a[i];
      if(a[i]==1) z++;
      s+=a[i];
      if(i!=0 && i!=n-1 && a[i]==1)  p++;
      }
        if(z==n) cout<<-1<<endl;
        else if(p==n-2) {
            cout<<a[0]+a[n-1]-1<<endl;
        }
      else cout<<s-1<<endl;
    }
    return 0;
}