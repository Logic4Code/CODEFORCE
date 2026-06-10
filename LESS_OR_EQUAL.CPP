#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x;
    cin >> x;
    vector<int> ar(n);
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    sort(ar.begin(), ar.end());
    int a = ar[x - 1];
    if (x == 0)
    {
        if (ar[0] > 1)
        {
            a = 1;
        }
        else
        {
            a = -1;
        }
    }
    else
    {
        if (ar[x - 1] == ar[x])
        {
            a = -1;
        }
        else
        {
            a = ar[x - 1];
        }
    }
    cout << a;
}
