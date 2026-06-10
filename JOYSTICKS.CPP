#include <bits/stdc++.h>
using namespace std;

int main()
{
   int a1, a2;
   cin >> a1 >> a2;

    if (a1 <= 1 && a2 <= 1) {
        std::cout << 0 ;
    }
else{
    int ans = 0;
    while (a1 > 0 && a2 > 0) {
        if (a1 < a2) {
            a1 += 1;
            a2 -= 2;
        } else {
            a2 += 1;
            a1 -= 2;
        }
        
        if (a1 >= 0 && a2 >= 0) {
            ans++;
        }
    }

    std::cout << ans;
}
}