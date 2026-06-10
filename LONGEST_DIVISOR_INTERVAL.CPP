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
        long long n;
        cin >> n;
        vector<long long> a;
        vector<long long> b;
        vector<long long> c;

        for (long long i = 1; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                a.push_back(i);
                if (i * i != n)
                {
                    a.push_back(n / i);
                }
            }
        }
            sort(a.begin(), a.end());
            for (long long i = 0; i < a.size() - 1; i++)
            {
                if (a[i + 1] == a[i] + 1)
                {
                    b.push_back(a[i]);
                    if (i + 2 == a.size() || a[i + 2] != a[i + 1] + 1)
                    {
                        b.push_back(a[i + 1]);
                    }
                }
            }
            int count = 1;
            if (b.empty())
            {
                cout << 1 << endl;
                continue;
            }
            for (long long i = 0; i < b.size() - 1; i++)
            {
                if (b[i + 1] == b[i] + 1)
                {
                    count++;
                }
                else
                {
                    c.push_back(count);
                    count = 1;
                }
            }
            c.push_back(count);
            sort(c.begin(), c.end());
            cout << c.back() << endl;
        }
        
    }

