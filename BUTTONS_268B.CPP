#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n;
    cin >> n;

    int ans = 0;
    for (int i = n; i >= 1; --i) {
        ans += (i - 1) * (n - i) + i;
    }  
    cout << ans ;
}