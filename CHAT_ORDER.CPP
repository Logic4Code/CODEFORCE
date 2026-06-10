#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    set<string> b;

    for (int i = n - 1; i >= 0; --i)
    {
        if (b.find(a[i]) == b.end())
        {
            cout << a[i] << endl;
            b.insert(a[i]);
        }
    }
}
