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
        vector<long long> a;
        vector<long long> b;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                a.push_back(i + 1);
            else if (s[i] == '2' && a.size() != 0)
            {
                a.pop_back();
                b.push_back(i + 1);
            }
        }

        vector<long long> c;
        for (int i = 0; i < a.size(); i++)
            c.push_back(a[i]);
        for (int i = 0; i < b.size(); i++)
            c.push_back(b[i]);
        sort(c.begin(), c.end());
        cout << c.size() << endl;
        for (int i = 0; i < c.size(); i++)
            cout << c[i] << " ";
        cout << endl;
    }
    return 0;
}