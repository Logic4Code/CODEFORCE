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

        if (n == 1)
        {
            cout << -1 << endl;
        }
        else
        {
            vector<int> p(n);
            for (int i = 0; i < p.size(); i++)
            {
                p[i] = i + 1;
            }

            long long s = 0;
            for (int i = 0; i < n - 1; i++)
            {
                s += p[i];
                if (round(sqrt(s)) * round(sqrt(s)) == s)
                {
                    s -= p[i];
                    swap(p[i], p[i + 1]);
                    s += p[i];
                }
            }
            s+=p[n-1];
            if (round(sqrt(s)) * round(sqrt(s)) == s)
                cout << -1 << endl;
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
}