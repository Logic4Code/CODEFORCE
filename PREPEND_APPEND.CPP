#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, b = 0;
        cin >> n;
       string s;
       cin>>s;
        for (int i = 0; i < n/2; i++)
        {
            if (s[i] == '1' && s[n - i-1] == '0')
            {
                b += 2;
            }
            else if (s[i] == '0' && s[n - i-1] == '1')
            {
                b += 2;
            }
            else
            {
                break;
            }
        }
        cout << n - b << endl;
    }
}