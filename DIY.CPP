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
      vector<long long> a(n);
      map<long long,int>f;
      for (int i = 0; i < n; i++) {
      cin >> a[i];
      f[a[i]]++;
      }
        sort(a.begin(),a.end());
       int i = -1, j = -1, l = -1, k = -1;
        bool ans=false;
    int x = 0;
        while (x < n) {
            if (f[a[x]] >= 2) {
                i = x;
                f[a[x]] -= 2; 
                break;
            }
            x++;
        }
        while (x < n) {
            if (f[a[x]] >= 2) {
                j = x;
                f[a[x]] -= 2;
                break;
            }
            x++;
        }
        x = n - 1;
        while (x >= 0) {
            if (f[a[x]] >= 2) {
                l = x;
                f[a[x]] -= 2;
                break;
            }
            x--;
        }

        while (x >= 0) {
            if (f[a[x]] >= 2) {
                k = x;
                f[a[x]] -= 2;
                break;
            }
            x--;
        }
     if(i != -1 && j != -1 && k != -1 && l != -1){
        ans=true;
     }
     if(ans){
        cout<<"YES"<<"\n";
          cout<<a[i]<<" "<<a[j]<<" "<<a[i]<<" "<<a[l]<<" "<<a[k]<<" "<<a[j]<<" "<<a[k]<<" "<<a[l]<<"\n";
          
     }
     else{
        cout<<"NO"<<"\n";
     }
    }
    return 0;
}