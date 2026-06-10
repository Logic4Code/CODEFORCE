#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        long long c, m, x;
    cin >> c >> m >> x;
    
    long long a = min(c, m);
    
    long long b = (c + m + x) / 3;
    
    cout << min(a, b) << "\n";
}
}