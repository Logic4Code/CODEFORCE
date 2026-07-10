#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long b;
    cin >> b;
    long long c = 0;

    for (long long i = 1; i * i <= b; i++)
    {
        if (b % i == 0)
        {
            c++;

            if (i * i != b)
            {
                c++;
            }
        }
    }

    cout << c;
}