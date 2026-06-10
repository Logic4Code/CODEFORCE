#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int i = 0;
    while (i < n && a[i] == i + 1)
    {
        i++;
    }
    cout << i + 1;
}