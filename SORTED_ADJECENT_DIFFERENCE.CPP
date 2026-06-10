#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int s = 0, e = n - 1;
        while (e >= s)
        {
            if (s == e) {
                b.push_back(a[s]);
                break;
            }
            b.push_back(a[e]);
            b.push_back(a[s]);
            s++;
            e--;
        }
        reverse(b.begin(), b.end());
        for (int i = 0; i < n; i++)
        {
            cout << b[i] << " ";
        }
        cout<<endl;
    }
}