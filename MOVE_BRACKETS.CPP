#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >>n;
        string s;
        cin >>s;
        bool pair = true;
    while (pair) {
        pair = false;
        int l = s.length();
        for ( int i = 0; i < l - 1; ++i) {
            if ((s[i] == '(' && s[i+1] == ')') ||
                (s[i] == '[' && s[i+1] == ']') ||
                (s[i] == '{' && s[i+1] == '}')) {              
                s.erase(i, 2); 
                pair = true;
                break; 
            }
        }
    }
    cout<<s.size()/2<<endl;
}
}
