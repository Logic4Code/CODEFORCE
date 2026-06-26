#include <bits/stdc++.h>
using namespace std;
int main()
{
    int p, q, r, s;
    char colon; 
    cin >> p >> colon >> q;
    cin >> r >> colon >> s;
    int ans = (p * 60 + q + r * 60 + s) / 2;

    int a = ans / 60;
    int b = ans % 60;
    cout << setfill('0') << setw(2) << a<< ":"<< setfill('0') << setw(2) <<  b;
}