#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if(n==2) cout<<-1<<"\n";
        else
        {
        vector<long long> p(n);
        p[0]=1;
        p[1]=2;
        p[2]=3;
        for (long long i = 3; i < n; i++)
        {
            p[i]=p[i-1]*2;
        }
             for (long long i = 0; i < n; i++)
        {
           cout << p[i] <<" ";
        }
        cout << "\n";
    }
}
}