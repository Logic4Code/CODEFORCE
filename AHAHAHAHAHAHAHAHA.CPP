#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        int ze = 0, on = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 0)
                ze++;
            else
                on++;
        }

        if (ze >= n / 2)
        {
            cout << ze << endl;
            for (int i = 0; i < ze; i++)
            {
                cout << 0 << " ";
            }
            cout << endl;
        }
        else
        {
            if (on % 2 != 0)
            {
                on--;
            }
            cout << on << endl;
            for (int i = 0; i < on; i++)
            {
                cout << 1 << " ";
            }
            cout << endl;
        }
    }
}