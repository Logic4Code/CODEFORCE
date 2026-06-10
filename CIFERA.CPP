#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    long long n, k, z = 0, p = 0;
    cin >> n >> k;
    for (int i = 1; i < 31; i++)
    {
        long long result = round(pow(n, i));
        if (result== k)
        {
            z = 1;
            p = i - 1;
            break;
        }

        if (pow(n, i) > k) break;
    }
    if (z > 0)
    {
        cout << "YES" << endl;
        cout << p;
    }
    else
    {
        cout << "NO";
    }
    return 0;
}