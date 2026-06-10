#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k,t;
    string s;
    cin >> t >> k>>s;
    if (k >= s.length())
    {
        cout << "";
    }
    else
    {
        vector<int> num(26, 0);
        for (char c : s)
        {
            num[c - 'a']++;
        }
        vector<int> b(26, 0);
        for (int i = 0; i < 26; i++)
        {
            if (k >= num[i])
            {
                b[i] = num[i];
                k -= num[i];
            }
            else
            {
                b[i] = k;
                k = 0;
                break;
            }
        }
        string ans = "";
        for (char c : s)
        {
            if (b[c - 'a'] > 0)
            {
                b[c - 'a']--;
            }
            else
            {
                ans += c;
            }
        }
        cout << ans << endl;
    }
}