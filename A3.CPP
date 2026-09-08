#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     int B,A;
     cin>>A>>B;
for (long long g = B - A; g >= 1; --g) {
        long long count = (B / g) - ((A - 1) / g);
        if (count >= 2) {
          cout<<g;
          break;
        }
    }
    return 0;
}