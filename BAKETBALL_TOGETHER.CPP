#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, d;
    cin >> n >> d;
    vector<int> p(n);
    for (int i = 0; i < n; i++) cin >> p[i];
    sort(p.begin(), p.end());
    int a = 0;
    int c = 0;
    for (int i = n-1; i>=0; i--)
    {
        a += (d / p[i]) + 1;
        if (a <= n)
        {
            c++;
        }
        else break;
    }
    cout << c << endl;
}
