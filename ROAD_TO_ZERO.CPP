#include <bits/stdc++.h>
using namespace std;

int main(){
 int t;
    cin >> t;
    while (t--)
    {
{
long long x, y, a, b;
    cin >> x >> y >> a >> b;
    if (x > y) swap(x, y);

    long long p = (x + y) * a;
    long long q = (x * b) + (y - x) * a;

    cout << min(p, q) << endl;
}
    }
}