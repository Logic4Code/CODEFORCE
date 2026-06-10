#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
            string s;
            cin >> n >> s;
            vector<int> freq(26, 0);
            int a = 0;
            for (char c : s) {
                freq[c - 'a']++;
                a = max(a, freq[c - 'a']);
            }
            int ans = max(n % 2, 2 * a - n);
            
            cout << ans <<endl;
        }
}