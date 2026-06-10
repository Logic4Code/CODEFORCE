#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    long long n, m, a;
    cin >> n >> m >> a;
    long long x, y;

    x = n / a;
    if (n % a != 0){
        x++;
    }
    y = m / a;
    if (m % a != 0){
        y++;
    }
    cout << x * y << endl;
}
