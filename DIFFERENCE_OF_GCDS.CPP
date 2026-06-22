#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
int n;
    long long l, r;
    cin >> n >> l >> r;
    
   vector<long long> a(n+1);
    bool ans = true;
    
    for (int i = 1; i <= n; ++i) {
        long long x = ((l + i - 1) / i) * i;
        
        if (x > r) {
            ans = false;
            break;
        }
        a[i] = x;
    }
    
    if (!ans) {
       cout << "NO"<<endl;
    } else {
        cout << "YES"<<endl;
        for (int i = 1; i <= n; ++i) {
           cout << a[i] << " ";
        }
        cout << endl;
    }
}
}