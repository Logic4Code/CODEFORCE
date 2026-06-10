#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a25 = 0, a50 = 0,ans=0;
    cin >> n;

      vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        
    for (int i = 0; i < n; i++) {
        if (a[i] == 25) {
            a25++;
        } 
        else if (a[i] == 50) {
            if (a25 >= 1) {
                a25--;
                a50++;
            } else {
                ans++;
                break;
            }
        } 
        else if (a[i] == 100) {
            if (a50 >= 1 && a25 >= 1) {
                a50--;
                a25--;
            } 
            else if (a25 >= 3) {
                a25 -= 3;
            } 
            else {
              ans++;
                break;
            }
        }
    }

   if(ans==0) cout << "YES";
   else cout << "NO";
}