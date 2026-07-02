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
    
    map<int, int> ans;
    
    for (int i = 0; i < n; ++i) {
        int y;
        cin >> y;
        
        if (y % 2 == 0) {
            int x = 0;
            int temp = y;
            
            while (temp % 2 == 0) {
                temp /= 2;
                x++;
            }
            
            ans[temp] = max(ans[temp], x);
        }
    }
    
    int ans2 = 0;
   for (auto const& pair : ans) {
    ans2 += pair.second;
}
    
    cout << ans2 << "\n";
}
}