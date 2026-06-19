#include <bits/stdc++.h>
using namespace std;

int main()
{
int n;
    cin >> n;
  vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int x = a.back(); 

    vector<bool> p(n, false);

    for (int i = n - 1; i >= 0; i--) {
        if (x % a[i] == 0 && !p[i]) {
            p[i] = true;
            if (i > 0 && a[i] == a[i - 1]) {
                i--; 
            }
        }
    }

    int y = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (!p[i]) {
            y = a[i];
            break; 
        }
    }

    cout << x << " " << y ;
}