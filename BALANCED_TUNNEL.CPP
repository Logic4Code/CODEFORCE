#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
   cin >> n;
  vector<int> a(n);
    vector<int> b(n);

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }

    vector<bool> e(n + 1, false);
    
    int i = 0; 
    int j = 0;
    int ans = 0;

    while (j < n) {
        if (e[a[i]]) {
            i++;
        } 
        else if (a[i] == b[j]) {
            i++;
            j++;
        } 
        else {
            ans++;
            e[b[j]] = true; 
            j++;
        }
    }
    cout << ans ;
}