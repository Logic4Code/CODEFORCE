#include <bits/stdc++.h>
using namespace std;
long long func(long long num) {
    string s = to_string(num);
    s.erase(remove(s.begin(), s.end(), '0'), s.end());
    return stoll(s);
}
int main()
{
long long a, b;
    cin >> a >> b;

    long long c = a + b;

    long long x = func(a);
    long long y = func(b);
    long long z = func(c);

    if (x + y == z) {
        cout << "YES";
    } else {
      cout << "NO";
    }
}