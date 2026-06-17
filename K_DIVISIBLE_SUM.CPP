#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
long long n, k;
    cin >> n >> k;
    
    if (n <= k) {
       if (k % n == 0) {
    cout << k / n << endl;       
} else {
    cout << (k / n) + 1 << endl; 
}
    } else {
        if (n % k == 0) {
            cout << 1 << endl;
        } else {
            cout << 2 << endl;
        }
    }
}
}