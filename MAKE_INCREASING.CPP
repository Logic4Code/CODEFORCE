#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0, b = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (n == 1)
        {
            cout << 0 << endl;
        }
        else
        {
            for (int i = n - 2; i >= 0; i--)
            {
                while (a[i] >= a[i + 1] && a[i] > 0)
                {
                    a[i] /= 2;
                    count++;
                }
                if (a[i] >= a[i + 1] && i < n - 1)
                {
                    cout << -1 << endl;
                    break;
                }
                else
                {
                    b = count;
                }
            }
          cout<<count<<endl;

        }
    }
}