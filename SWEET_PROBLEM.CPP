#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
    vector<long long> a(3);
    cin >> a[0] >> a[1] >> a[2];
    
    sort(a.begin(), a.end());
    
    if (a[2]> a[0]+a[1]) {
        cout << a[0]+a[1]<< "\n";
    } 
    else {
        cout << (a[0] + a[1] + a[2]) / 2 << "\n";
    }
}
}