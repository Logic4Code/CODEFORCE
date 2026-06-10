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
        vector<long long int> a(n);
        vector<int> b;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (int i = 0; i < n; i++)
        {
             int x=0;
            int y=0;
            for(int j=i+1; j<n; j++)
            {
                if (a[i]>a[j])
                {
                    x++;
                }
                else if (a[j]>a[i])
                {
                    y++;
                }                
            }
            b.push_back(max(x,y));

        }
        for (int i = 0; i < n; i++)
        {

            cout << b[i]<<" ";
        }
        cout<<endl;
    }
}