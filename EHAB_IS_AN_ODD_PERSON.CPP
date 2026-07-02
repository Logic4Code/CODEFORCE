#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
    cin >> n;
    
    vector<int> a(n);
    bool o = false;
    bool e = false;
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] % 2 == 0) {
            e = true;
        } else {
            o = true;
        }
    }
    
    if (o && e) {
        sort(a.begin(), a.end());
    }
    
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
}