#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> f(n);
    unordered_set<int> s;
    for (int i = 0; i < n; i++)
    {
        cin >> f[i];
        s.insert(f[i]);
    }
    vector<int> u(s.begin(), s.end());
    sort(u.begin(), u.end());
    int x = u.size();

    if (x == 1)
    {
        cout << 0 << endl;
    }
    else if (x == 2)
    {
        int d = u[1] - u[0];
        if (d % 2 == 0)
        {
            cout << d / 2 << endl;
        }
        else
        {
            cout << d << endl;
        }
    }
    else if (x == 3)
    {
        int d1 = u[1] - u[0];
        int d2 = u[2] - u[1];
        if (d1 == d2)
        {
            cout << d1 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    else
    {
        cout << -1 << endl;
    }
}