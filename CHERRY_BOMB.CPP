#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, count = 0, ans = -1;
        cin >> n >> k;
        vector<int> a(n);
        vector<int> b(n);
        vector<int> c(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            c[i] = a[i];
        }
        
        int fixed_x = -1; 

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            if (b[i] == -1)
            {
                count++;
            }
            else
            {
                if (fixed_x != -1 && a[i] + b[i] != fixed_x) {
                    ans = 0;
                }
                fixed_x = a[i] + b[i];
            }
        }
        
        sort(c.begin(), c.end());
        
        int L = c[n - 1];
        int R = c[0] + k;

        for (int i = 0; i < n; i++)
        {
            if (b[i] != -1)
            {
                if (fixed_x < L || fixed_x > R)
                {
                    ans = 0;
                    break;
                }
            }
        }

        if (L > R || ans == 0)
        {
             cout << 0 << endl;
        }
        else if (n == count)
        {
            cout << R - L + 1 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }
}