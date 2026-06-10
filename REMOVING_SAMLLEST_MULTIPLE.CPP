#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
    int n;
    cin >> n;
    string a;
    cin>>a;
    vector<bool>c(n+1,0);
    long long ans=0;
    for(long long i=1;i<=n;i++){
        for(long long j=i;j<=n;j+=i){
           if(a[j-1]=='1') break;
           if(!c[j]){
            c[j]=1;
            ans+=i;
           }
        }
    }
    cout<<ans<<endl;
}
}