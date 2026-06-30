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
    int x=0;
    int t1 = 0, m1 = 0;
    for (char c : s) {
        if (c == 'T') t1++;
        else m1++;
    }

    if (t1 != 2 * m1) {
       x++;
    }

    int t2 = 0, m2 = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'T') t2++;
        else m2++;
        
        if (m2 > t2) {
           x++;
        }
    }

    t2 = 0; 
    m2 = 0;
    for (int i = n - 1; i >= 0; --i) {
        if (s[i] == 'T') t2++;
        else m2++;
        
        if (m2 > t2) {
           x++;
        }
    }
if(x>0)  cout << "NO"<<endl;
   else cout << "YES"<<endl;
}
}