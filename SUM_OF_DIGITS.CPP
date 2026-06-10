#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin >> n;
    if (n.length() < 2)
    {
        cout << 0 << endl;
    }
    else
    {
        int count = 0;
        long long a = 0;

        for (int i = 0; i < n.length(); i++)
        {
            a += (n[i] - '0');
        }
        count++;

        while (a >= 10)
        {
            long long b = 0;
            while (a > 0)
            {
                b += a % 10;
                a /= 10;
            }
            a = b;
            count++;
        }

        cout << count << endl;
    }
}