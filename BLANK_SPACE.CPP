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
        int a = 0;
        int ans=0;
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            if (x == 0)
            {
                a++;
            }
            else{
                ans=max(ans,a);
                a=0;
            }
        }
        ans=max(ans,a);
        cout << ans << endl;
    }
}