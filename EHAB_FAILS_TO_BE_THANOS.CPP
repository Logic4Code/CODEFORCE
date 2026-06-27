#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    
    int x = 2 * n;
    vector<int> a(x);
    
    for (int i = 0; i < x; i++) {
        cin >> a[i];
    }
    
    sort(a.begin(), a.end());

    if (a[0] == a[x - 1]) {
        cout << -1 ;
    } else {
        for (int i = 0; i < x; i++) {
            cout << a[i] <<" ";
        }
    }
}