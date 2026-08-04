#include <bits/stdc++.h>
using namespace std;
int main()
{
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool ans = false;
        int x = -1;
        for (int i = 0; i < n-1; i++)
        {
            if (s[i] > s[i + 1])
            {
                x = i;
                ans = true;
                break;
            }
        }
        if (ans)
        {
            cout << "YES" << endl;
            cout << x + 1 << " " << x + 2;
        }
        else
            cout << "NO" << endl;
}