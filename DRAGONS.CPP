#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s, n;
    cin >> s >> n;
    vector<pair<int, int>> d(n);
    for (int i = 0; i < n; i++)
    {
        cin >> d[i].first >> d[i].second;
    }

    sort(d.begin(), d.end());

    bool ans = true;
    for (int i = 0; i < n; i++)
    {
        if (s > d[i].first)
        {
            s += d[i].second;
        }
        else
        {
            ans = false;
            break;
        }
    }

    if (ans)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
