#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b = 0;
    cin >> a;
    string s;
    cin >> s;
    map<int, int> ch;
    for (int i = 0; i < s.size(); i++)
    {
        ch[s[i]]++;
    }
    string c = "";
    for (auto const &pair : ch)
    {
        char cha = pair.first;
        int freq = pair.second;
        if (freq % a != 0)
        {
            b++;
            break;
        }
        c.append(freq / a, cha);
    }
    if (b > 0)
    {
        cout << -1;
    }
    else
    {
        string ans = "";
        for (int i = 0; i < a; i++)
        {
            ans += c;
        }
        cout << ans << endl;
    }
}
