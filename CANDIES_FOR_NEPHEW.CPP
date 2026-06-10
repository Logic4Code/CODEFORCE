#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a = n % 3;
        if (a == 0)
        {
            cout << "0";
        }
        else if (a == 1)
        {
            cout << "2";
        }
        else if (a == 2)
        {
            cout << "1";
        }
    }
}
