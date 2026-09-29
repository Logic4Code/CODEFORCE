#include <bits/stdc++.h>
using namespace std;
int sum(int n){
    int a=0;
    while(n>0){
        a+=(n%10)*(n%10);
        n=n/10;
    }
     return a;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
     int n;
     cin>>n;
      vector<long long> a(n),b(n);
      for (int i = 0; i < n; i++) {
      cin >> a[i];
      }
      int x=25;
while(x--){
   if(x==24){for (int i = 0; i < n; i++) {
      b[i]= sum(a[i]);
      }
    }
    else{
        for (int i = 0; i < n; i++) {
      b[i]= sum(b[i]);
      }
    }
}

sort(b.begin(),b.end());
long long ans = 0;
        for (int i = 0; i < n; ) {
            int j = i;
            while (j < n && b[j] == b[i]) {
                j++;
            }
            long long c = j - i;
            ans += c * (c - 1) / 2;
            i = j;
        }
     cout<<ans<<endl;   
    }
    return 0;
}