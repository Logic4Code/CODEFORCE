#include <bits/stdc++.h>
using namespace std;
 
int main()
{
   
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int b=0;
        int c=0;
        int s=0;
        int e=n-1;
                for(int i=0;i<n;i++){
                    int d= max(a[s],a[e]);
        if (i%2!=0)
        {
            b+=d;
            if (d==a[s])
            {
                s++;
            }
            else
            {
                e--;
            }
        }
        else
        {
            c+=d;
            if (d==a[s])
            {
                s++;
            }
            else
            {
                e--;
            }
        }
    }
        cout<<c<<" "<<b;

                }


     