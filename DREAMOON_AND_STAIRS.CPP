#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a, b;
    cin >> a >> b;
    if (b > a)
    {
        cout << -1;
    }
    else
    {
        int c = 0;
        if (a % 2 == 0)
        {
            c = a / 2;
        }
        else
        {
            c = (a / 2) + 1;
        }
        while (c % b != 0)
        {
            c++;
        }
        cout << c;
    }
}