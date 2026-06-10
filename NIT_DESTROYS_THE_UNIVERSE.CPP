#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c = 0;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] != 0)
            {
                if (i == 0 || a[i - 1] == 0)
                {
                    c++;
                }
            }
        }

        cout << min(c,2)<< endl;
    }
}
