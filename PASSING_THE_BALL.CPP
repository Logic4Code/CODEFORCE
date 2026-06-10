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
        string p;
        vector<int> a(n+5,0);
        cin >> p ;
        a[0]++;
        int c=0;
        for(int i=0; i<n; i++)
        {
            if (p[i]=='R')
            {
                c++;
            }
            else
            {                     
                c--;
                break;
            }
            a[c]++;
        }
        int ans=0;
        for(int i=0; i<n; i++)
        {
            if (a[i]>=1)
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
}