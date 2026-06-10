#include <bits/stdc++.h>
using namespace std;
int main()
{
      long long n,x;
        cin >> n;
           vector<int> a(n),b(n-1),c(n-2);
           int ans1=0,ans2=0;
        for(int i=0;i<n;i++){
        cin>>a[i];
        ans1=ans1^a[i];
       ans2=ans2^a[i];
       }
        for(int i=0;i<n-1;i++){
        cin>>b[i];
        ans1=ans1^b[i];
       }
        for(int i=0;i<n-2;i++){
        cin>>c[i];
       ans2=ans2^c[i];
       }
      cout<<ans1<<endl;
      ans2=ans2^ans1;
      cout<<ans2<<endl;
       
}
