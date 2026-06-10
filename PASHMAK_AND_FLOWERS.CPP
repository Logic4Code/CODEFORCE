#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    long long m = 0, k = 0;
    int i = 0, j = n - 1;
    while (i < n && a[0] == a[i])
    {
        m++;
        i++;
    }
    while (j >= 0 && a[n - 1] == a[j])
    {
        k++;
        j--;
    }
    if (a[0] == a[n - 1])
    {
        long long ans = n;
        cout << 0 << " " << (ans * (ans - 1)) / 2;
    }
    else
    {
        cout << a[n - 1] - a[0] << " " << m * k;
    }
}
