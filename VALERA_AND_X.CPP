#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<string> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (a[0][0] == a[1][0])
        cout << "NO";
    else
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j || i + j == n - 1)
                {
                    if (a[i][j] != a[0][0])
                    {
                        cout << "NO";
                        return 0;
                    }
                }
                else
                {
                    if (a[i][j] != a[1][0])
                    {
                        cout << "NO";
                        return 0;
                    }
                }
            }
        }
        cout << "YES";
    }
}