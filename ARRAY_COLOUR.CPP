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
        char a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        char b[n];
        for (int i = 0; i < n; i++)
        {
            b[i] = a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                a[i] = 'b';
            }
            else
            {
                a[i] = 'r';
            }
        }
        int i;
        for (i = 0; i < n; i++)
        { 
            int min = i;
            for (int j = i + 1; j < n; j++)
            {
                if (b[min] > b[j])
                {
                    min = j;
                }
                swap(b[min], b[i]);
            }
        }
        for (i = 0; i < n; i++)
        {
            if (b[i + 1] == b[i])
            {
                cout << "NO" << endl;
                break;
            }
            else
            {
                cout << "YES" << endl;
                break;
            }
        }
    }
}