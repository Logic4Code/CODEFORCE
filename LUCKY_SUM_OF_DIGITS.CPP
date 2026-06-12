#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n;
    cin >> n;
    for (int a = n / 7; a >= 0; a--) {
        int b = n - (a * 7);
        if (b % 4 == 0) {
            int c = b / 4;
            for (int i = 0; i < c; i++) cout << 4;
            for (int i = 0; i < a; i++) cout << 7;
            return 0;
        }
    }
    cout << -1 ;
    return 0;
}