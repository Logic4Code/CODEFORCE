#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n, t, k, d;
  cin >> n >> t >> k >> d;
        int a = (n + k - 1) / k;
        int b = d / t;
        int c = a - b;

        if (c > 1) {
            cout << "YES";
        } else {
            cout << "NO";
        }
}