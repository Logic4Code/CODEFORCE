#include <bits/stdc++.h>
using namespace std;
int main()
{
         int n,b=0;
    cin >> n ;  
    vector <int> a(n);
    int x = INT_MAX; 

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        x= min(x, abs(a[i]));
    }

    cout << x << endl;
}
