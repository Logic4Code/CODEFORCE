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
     int o=0;
     for (int i = 0; i < n; i++) {
      o=o|i+1;
      }
      int x=0;
      for (int i = 0; i < n; i++) {
      if(i+1>=2*o )  x=i;
      }
      if(x!=0){
       for (int i = 0; i < n; i++) {
      if(i==x) cout<<1<<" ";
      else cout<<0<<" ";
      } 
    }
    else{
       vector<int> a(n);
       int b=1,z=0;
        for (int i = 0; i < n; i++) {
      a[i]=(i+1)*2;
      b=b^a[i];
      } 
      if(b>=2*o){
        for (int i = 0; i < n; i++) cout<<1<<" ";
        cout<<endl;
      }
       else{
        for (int i = 0; i < n; i++) {
       
      }  
    }
    }
    }
    return 0;
}