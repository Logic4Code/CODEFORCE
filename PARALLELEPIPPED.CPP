#include <bits/stdc++.h>
using namespace std;
int main()
{
long long a, b, c;
cin >> a >> b >> c;
        long long z = round(sqrt(a * b * c));
        
        long long ans = 4 * (z/a+z/b+z/c);
        cout << ans <<endl;
}