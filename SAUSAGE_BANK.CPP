#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        long long n,k;
        cin>>n>>k;
        long long a=(2*(k-1))+round(pow(2,n-(k-1)));
        cout<<a<<endl;
    }
    return 0;
}