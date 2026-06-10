#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
         int n,b;
    cin >> n >>b;  
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int k=a[0];
    
        for (int i = 1; i < n; i++) {
         k=max(k,a[i]-a[i-1]);
        }
   int z=b-a[n-1];

   if(k>2*z){
    cout<<k<<endl;
   }
   else{
    cout<<2*z<<endl;
   }
}
}