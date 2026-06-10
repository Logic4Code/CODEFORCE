#include <bits/stdc++.h>
using namespace std;
bool sq(long long x)
{
    long long ans = round(sqrt(x));
    return (ans * ans == x);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        if ((n % 2 == 0 && sq(n / 2)) || (n % 4 == 0 && sq(n / 4)))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}