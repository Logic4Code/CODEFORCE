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
    string s;
    cin >> s;
    
    string ans = "";
    int c = 0;
    
    if (s[0] != '9') {
        for (int i = n - 1; i >= 0; i--) {
            int num = 9 - (s[i] - '0');
            ans += to_string(num);
        }
    } 
    else {
        for (int i = n - 1; i >= 0; i--) {
            int d = s[i] - '0';
            int x = 1 - c; 
            
            if (x < d) {
                x += 10;
                c = 1;
            } else {
                c = 0;
            }
            
            ans += to_string(x - d);
        }
    }
    
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
}
}