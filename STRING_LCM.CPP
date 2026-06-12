#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
string s, t;
    cin >> s >> t;

    int a = s.length();
    int b = t.length();
    
    int n = a*b/__gcd(a,b); 

    string r1 = "";
    for (int i = 0; i < n / a; i++) {
        r1 += s;
    }

    string r2 = "";
    for (int i = 0; i < n / b; i++) {
        r2 += t;
    }

    if (r1 == r2) {
        cout << r1 <<endl ;
    } else {
        cout << "-1"<<endl;
    }
}
}