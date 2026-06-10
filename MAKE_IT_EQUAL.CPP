#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin >> n>>k;
        vector<int> a(n);
         vector<int> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        for (int i = 0; i < n; i++)
        {
            int p=a[i]%k;
            int l=b[i]%k;
            a[i]=min(p,k-p);
            b[i]=min(l,k-l);
   
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        if(a==b){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}