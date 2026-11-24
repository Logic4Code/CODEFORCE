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
     int z;
     map<int,int> f;
      vector<long long> a(n),ans,x;
      for (int i = 0; i < n; i++) {
      cin >> a[i];
      f[a[i]]++;
      }
      sort(a.begin(),a.end());

      for(int i=0;i<n;i++){
        z++;
        ans.push_back(a[i]);
        f[a[i]]--;
      }
        for(int i=0;i<n;i++){
        if(f[a[i]]>0){
            x.push_back(a[i]);
        }
      }
      sort(x.rbegin(),x.rend());
for(int i=0;i<n;i++){
        z++;
       while(f[a[i]]--){
         ans.push_back(a[i]);
       }
      }
cout<<z<<endl;
for(int i=0;i<n;i++){
    cout<<ans[i]<<' ';
}
cout<<endl;
    }
    return 0;
}