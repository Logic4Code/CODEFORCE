#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        long long a = 0;
        cin >> n ;
        string p;
        cin>>p;
       if (p.find("...") != string::npos) {
        cout << 2 << endl;
    } else {
        cout << count(p.begin(), p.end(), '.')<< endl;
    }
    }
}