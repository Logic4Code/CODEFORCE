#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool ans = false;
        for (char c = 'a'; c <= 'z'; ++c)
        {
            if (s.find(c) == string::npos)
            {
                cout << c << "\n";
                ans = true;
                break;
            }
        }
        if (!ans)
        {
            for (char c1 = 'a'; c1 <= 'z'; ++c1)
            {
                for (char c2 = 'a'; c2 <= 'z'; ++c2)
                {
                    string temp = "";
                    temp += c1;
                    temp += c2;
                    if (s.find(temp) == string::npos)
                    {
                        cout << temp << "\n";
                        ans = true;
                        break;
                    }
                }
                 if(ans) break;
            }
            if (!ans)
            {
                for (char c1 = 'a'; c1 <= 'z'; ++c1)
                {
                    for (char c2 = 'a'; c2 <= 'z'; ++c2)
                    {
                        for (char c3 = 'a'; c3 <= 'z'; ++c3)
                        {
                            string temp = "";
                            temp += c1;
                            temp += c2;
                            temp += c3;
                            if (s.find(temp) == string::npos)
                            {
                                cout << temp << "\n";
                                ans = true;
                                break;
                            }
                        }
                        if(ans) break;
                    }
                     if(ans) break;
                }
            }
        }
    }
}