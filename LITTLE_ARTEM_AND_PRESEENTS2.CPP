#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    if (t % 3 == 0)
    {
        cout << (t / 3) * 2;
    }
    else
    {
        cout << ((t / 3) * 2) + 1;
    }
}