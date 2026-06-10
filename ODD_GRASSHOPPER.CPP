#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int x, k;
        cin >> x >> k;
        if (abs(x)%2==0)
        {
            if (k%4==0)
            {
                cout << x << endl;
            }
            else if (k%4==1)
            {
                cout << x-k << endl;
            }
            else if (k%4==2)
            {
                cout << x+1 << endl;
            }
            else
            {
                cout << x+k+1 << endl;
            }
        }
        else
        {
            if (k%4==0)
            {
                cout << x << endl;
            }
            else if (k%4==1)
            {
                cout << x+k << endl;
            }
            else if (k%4==2)
            {
                cout << x-1 << endl;
            }
            else
            {
                cout << x-k-1 << endl;
            }
        }
    }
}