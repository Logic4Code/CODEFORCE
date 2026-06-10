#include <bits/stdc++.h>
using namespace std;
int main()
{
string s;
    cin >> s;

    int ans = 0;
    string train = "1";

    while (train.length() < s.length() || (train.length() == s.length() && train < s)) {
        ans++;
        train += "00";
    }

    cout << ans;
    return 0;
}