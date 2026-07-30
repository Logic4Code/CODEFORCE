#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
long long a, b;
    cin >> a >> b;

    long long ans = INT_MAX;

    long long i = max(2LL, b);

    for (long long j = i; j <= i + 100; ++j) {
        long long c = j - b;
        long long x = a;

        while (x > 0) {
            x /= j;
            c++;
        }

        ans = min(ans, c);
    }

    cout << ans << "\n";
}

}