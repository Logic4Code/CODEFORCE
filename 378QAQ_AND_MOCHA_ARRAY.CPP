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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        int b = a[0];
        vector<int> c;

        for (int i = 0; i < n; i++)
        {
            if (a[i] % b != 0)
            {
                c.push_back(a[i]);
            }
        }

        if (c.empty())
        {
            cout << "YES"<<endl;
        }
        else
        {
            int d = c[0];
            int e = 0;

            for (int num : c)
            {
                if (num % d != 0)
                {
                    e++;
                    break;
                }
            }

            if (e == 0)
            {
                cout << "YES"<<endl;
            }
            else
            {
                cout << "NO"<<endl;
            }
        }
    }
}