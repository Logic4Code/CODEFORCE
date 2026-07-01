#include <bits/stdc++.h>
using namespace std;
int main()
{
string n;
    cin >> n;

    int x = n.length();
    int ans = 0;

    if (x == 1) {
        ans = n[0] - '0';
    } else {
        ans = (n[x - 2] - '0') * 10 + (n[x - 1] - '0');
    }

    if (ans % 4 == 0) {
        cout << 4 ;
    } else {
        cout << 0;
    }
}