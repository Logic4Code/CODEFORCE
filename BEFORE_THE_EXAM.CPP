#include <bits/stdc++.h>
using namespace std;

int main()
{
    int d, sumTime;
    cin >> d >> sumTime;

    vector<int> minT(d), maxT(d);
    int smin = 0, smax = 0;

    for (int i = 0; i < d; ++i)
    {
        cin >> minT[i] >> maxT[i];
        smin += minT[i];
        smax += maxT[i];
    }

    if (sumTime < smin || sumTime > smax)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;

        int a = smin;
        for (int i = 0; i < d; ++i)
        {
            a -= minT[i];
            int b = min(maxT[i], sumTime - a);

            cout << b << " ";
            sumTime -= b;
        }
    }
}