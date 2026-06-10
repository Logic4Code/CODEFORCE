#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int n = s.length();
    int ans = 0;

    int l = 0;
    int r = n - 1;

    while (l < r)
    {
        if (s[l] != s[r])
        {
            ans++;
        }
        l++;
        r--;
    }

    if (ans == 1)
    {
        cout << "YES";
    }
    else if (ans == 0 && n % 2 != 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}