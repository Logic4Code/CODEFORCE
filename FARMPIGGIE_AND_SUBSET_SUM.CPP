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

        vector<int> p(n);

        for (int i = 0; i < n; i += 2)
        {
            p[i] = i + 2;
            p[i + 1] = i + 1;
        }
        for (int i = 0; i < n; ++i)
        {
           cout << p[i] <<" ";
        }
        cout << "\n";
    }
}