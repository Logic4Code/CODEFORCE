#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
   cin >> n >> m;
   if (m == 0) {
        cout << "YES";
    }
    else{
    vector<int> a(m);
    for (int i = 0; i < m; ++i) {
        cin >> a[i];
    }
    bool ans=true;
    sort(a.begin(), a.end());
    if (a[0] == 1 || a[m - 1] == n) {
        ans=false;
    }
    for (int i = 0; i < m - 2; ++i) {
        if (a[i + 1] == a[i] + 1 && a[i + 2] == a[i] + 2) {
            ans=false;  
        }
    }
if(ans)
    cout << "YES";
else
    cout << "NO";
}
}