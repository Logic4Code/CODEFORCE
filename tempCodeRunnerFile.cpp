#include <bits/stdc++.h>
using namespace std;
map<int, int> c;
vector<int>b;
int pow(int o){
    int num=1;
    for (int i = 0; i < o; i++)
    {
       num*=2;
    }
    return num;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int r = 0;
        for (int i = 1; i <= n; i++)
        {
            r = r ^ i;
        }
        vector<int> a(32, 0);
        for (int i = 1; i <= n; i++)
        {
            int y = i;
            for (int j = 0; j < 32; j++)
            {
                if (y % 2 == 1)a[j]++;
                y = y / 2;
            }
        }
        int h = -1;
        for (int i = 31; i>=0; i--)
        {
            if (a[i] > 0)
            {
                h = i;
                break;
            }
        }
        for (int i = h + 1; i >= 1; i--)
        {
            if (a[i] % 2 == 0)
            {
                b.push_back(i-1);
                a[i]++;
                a[i - 1]--;
            }  
        }
     for (int i=0;i<b.size();i++)
     {
        int p=b[i];
        c[pow(p)]=1; 
     }
     for (int i = 1; i <=n; i++)
     {
       if(c[i]==1) cout<<1<<" ";
       else cout<<0<<" ";
     }
     cout<<endl;
    }
}