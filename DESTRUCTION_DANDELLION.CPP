#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long count = 0, sum = 0;
        long long e = 0,c=0;

        cin >> n;
      vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        vector<int> d;

        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 != 0)
            {
                count++;
                d.push_back(a[i]);
            }
            else
            {
                c+=a[i];
            }
        }
        sort(d.begin(), d.end());
                 
        if (count != 0)
        {
            for (int j = count/2; j < count; j++)
            {
                e += d[j];
            }
        }
        if (count == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << e + c << endl;
        }
        
    }
}