#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
       long long n, a, b;
    cin >> n >> a >> b;
    long long d=(a / __gcd(a, b)) * b;
    long long na = n / a;
    long long nb = n / b;
    long long nab = n / d;

    long long x = na - nab; 
    long long y = nb - nab; 

    long long s1 = (x * (2 * n - x + 1)) / 2;

    long long s2 = (y * (y + 1)) / 2;

    cout << s1 - s2 << endl;
    }
}