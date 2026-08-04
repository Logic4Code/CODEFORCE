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
        int n=s.length();
        bool x = false;
        bool y = false;
        for (int i = 0; i < n; i++)
        {
            if (!x && s[i] == '0')
            {
                x = true;
            }
           else if (!y && s[i] == '1')
            {
                y = true;
            }
            else{
                cout<<s[i];
            }

        }
        cout<<endl;
    }
}