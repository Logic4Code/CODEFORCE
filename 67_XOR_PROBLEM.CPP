#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin>>n;
        vector<long long> k(n);
        for (int i = 0; i <n; i++) {
        cin>>k[i];
        }
        long long m=0;
        for (int i = 0; i < n; i++)
        {
           
            for (int j = i+1; j < n; j++)
            {
                long long v=k[i]^k[j];
               m=max(m,v);
            }
            
        }
        cout<<m<<endl;
       
}
}