#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     int n;
     cin>>n;
     long long ans=0;
if (n % 2 == 0) {
        long long k = (n / 2)+ 1;
        ans= k * k;
    } else {
        long long k = (n + 1) / 2;
        ans= (k + 1) * (k) * 2 ; 
    }
        cout<<ans;
}