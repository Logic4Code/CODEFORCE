#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.length();

        int count0 = 0, count1 = 0;
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '0')
                count0++;
            else
                count1++;
        }

        int num = 0;

        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '0')
            {
                if (count1 > 0)
                {
                    count1--;
                    num++;
                }
                else
                {
                    break;
                }
            }
            else
            {
                if (count0 > 0)
                {
                    count0--;
                    num++;
                }
                else
                {
                    break;
                }
            }
        }
        int ans = n - num;
        cout << ans <<endl;
    }
}