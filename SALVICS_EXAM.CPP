#include <bits/stdc++.h>
using namespace std;
int main()
{
    int z;
    cin >> z;
    while (z--)
    {
string s, t;
    cin >> s >> t;

    int n = s.length();
    int m = t.length();
    int j = 0; 
    for (int i = 0; i < n; i++) {
        if (j < m) {
            if (s[i] == t[j] || s[i] == '?') {
                s[i] = t[j];
                j++;
            }
        } else {
            if (s[i] == '?') {
                s[i] = 'a';
            }
        }
    }
    if (j == m) {
        cout << "YES" <<endl<< s <<endl;
    } else {
        cout << "NO"<<endl;
    }
}
}