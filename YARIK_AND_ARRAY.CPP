#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
   int n;
   cin >> n;
   vector<int> b(n);
    for (int i = 0; i < n; ++i) {
       cin >> b[i];
    }
   int s=b[0];
   int maxi=b[0];
   for(int i=1;i<n;i++){
    if(abs(b[i]%2)!=abs(b[i-1]%2)) {
        s=max(b[i],b[i]+s);
    }
    else s=b[i];
    maxi=max(maxi,s);
   }
   cout<<maxi<<endl;
}
}