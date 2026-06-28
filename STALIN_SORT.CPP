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
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int ans = n; 
    for (int i = 0; i < n; i++) {
        int x = i; 

        for (int j = i + 1; j < n; j++) {
            if (a[j] > a[i]) {
                x++;
            }
        }
        ans = min(ans, x);
    }

    cout << ans << endl;
}
}