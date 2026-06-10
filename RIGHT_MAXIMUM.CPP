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
        int x = INT_MIN;
        vector<long long> k(n);
        vector<long long> l;
        for (int i = 0; i < n; i++)
        {
            cin >> k[i];
        }
        long long m = 0, count = 0;
        
        for (int i = 0; i < n; i++)
        {
            m = max(m, k[i]);
            if (k[i] == m)
            {
                count++;
            }
        }

        cout << count << endl;
    }
}