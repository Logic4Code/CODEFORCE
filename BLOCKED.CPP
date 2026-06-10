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
        vector<int> p(n);
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
        }
        sort(p.begin(), p.end());
        reverse(p.begin(), p.end());
        bool v = false;
        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (p[i] == p[j])
                {
                    v = true;
                    break;
                }
            }
        }
        if (v)
        {
            cout << -1 << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                cout << p[i] << " ";
            }
            cout << endl;
        }
    }
}
