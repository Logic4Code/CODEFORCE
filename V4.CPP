#include <bits/stdc++.h>
using namespace std;
int power(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    if (b == 1)
    {
        return a;
    }
    int ans = power(a, b / 2);
    if (b % 2 == 0)
    {
        return ans * ans;
    }
    else
    {
        return a * ans * ans;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int k = 0;
        for (int i = 1; i <= n; i++)
        {
            k = k | i;
        }
        k *= 2;
        vector<int> a(32),c(n);
        int x = k;
        for (int i = 0; i < 32; i++)
        {
            a[i] = x % 2;
            x /= 2;
        }
        reverse(a.begin(), a.end());
        vector<vector<int>> b(n);
        for (int i = 0; i < n; i++)
        {
            x = i + 1;
            for (int j = 0; j < 32; j++)
            {
                b[i].push_back(x % 2);
                x /= 2;
            }
            reverse(b[i].begin(), b[i].end());
        }
        for(int i=0;i<31;i++){
            x=0;
            for(int j=0;j<n;j++){
                x=x^b[j][i];
            }
            if(x!=a[i]){
                int y=30-i;
                int z=power(2,y);
                z--;
                swap(b[z][i],b[z][i+1]);
                c[z]=1;
            }
        }
        for(int i=0;i<n;i++){
            cout<<c[i]<<' ';
        }
        cout<<endl;
    }
}