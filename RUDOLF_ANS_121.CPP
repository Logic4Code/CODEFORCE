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
        vector<long long> k(n);
        for (int i = 0; i < n; i++)
        {
            cin >> k[i];
        }
            int c = 0;
            for (int i = 0; i < n - 2; i++)
            {
                if(k[i]==0) continue;
                int a=k[i];
                k[i] = k[i] - a;
                k[i+1] = k[i+1] - 2*a;
                k[i + 2] = k[i + 2] - a;
                if (k[i+1] < 0 || k[i + 2] < 0)
                {
                    c++;
                    break;
                }
            }
            if (c > 0)
            {
                cout << "NO" << endl;
            }
            else if (k[n - 2] == 0 && k[n - 1] == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
    }
}