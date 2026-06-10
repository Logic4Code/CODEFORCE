#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s = 0;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(a.begin(), a.end());
        if (a[0] == a[n - 2])
        {
            s = a[n - 1];
        }
        else
        {
            s = a[0];
        }
        int j = 0;
        while (b[j] != s)
        {
            j++;
        }
        cout << j + 1 << endl;
    }
}