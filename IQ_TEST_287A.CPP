#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<string> ans(4);
    for (int i = 0; i < 4; ++i)
    {
        cin >> ans[i];
    }
    int a = 0;
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            int s = 0;

            if (ans[i][j] == '#')
                s++;
            if (ans[i][j + 1] == '#')
                s++;
            if (ans[i + 1][j] == '#')
                s++;
            if (ans[i + 1][j + 1] == '#')
                s++;

            if (s != 2)
            {
                a++;
                break;
            }
            if(a>0) break;
        }
    }
    if (a > 0)
        cout << "YES";
    else
        cout << "NO";
}