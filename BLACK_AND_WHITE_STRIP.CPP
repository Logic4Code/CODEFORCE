#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int m;
    cin >> m;
    while (m--)
    {
        int n, t;
        string s;
        cin >> n >> t >> s;
int y = 0; 
        int ans = 0; 
        
        for (int i = 0; i < t; i++)
        {
            if (s[i] == 'W')
            {
                y++;
            }
        }
        
        ans = y;
        
        for (int i = t; i < n; i++)
        {
            if (s[i] == 'W') y++;           
            if (s[i - t] == 'W') y--;      
            
            ans = min(ans, y);
        }
        
        cout << ans << endl;
    }
}