#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    long long s = 0;
    int mi = a[0];
    
    for (int i = 0; i < n; ++i) {
        if (a[i] < mi) {
            mi = a[i];
        }
        s += mi;
    }
    
    cout << s << endl;
}
    }